#include "BigInteger.h"

BigInteger::BigInteger(long long num) {
    *this = num;
}

BigInteger::BigInteger(const string &str){
    *this = str;
}

BigInteger &BigInteger::operator=(long long num) {
    s.clear();
    do {
        s.push_back(num % BASE); // 取后WIDTH位
        num /= BASE; // 截去后WIDTH位
    } while (num > 0);
    return *this;
}

BigInteger &BigInteger::operator=(const string &str) {
    string temp; // temp用于去除str前导0
    bool head = true; // 是否遍历在串首
    for (auto &it:str) {
        if (head && it != '0') head = false;
        if (!head) temp.push_back(it);
    }
    s.clear(); // 清空s
    int x, len = ((temp.length() - 1) / WIDTH) + 1; // x记录字符串转数字结果，len为段数
    for (int i = 0; i < len; i++) {
        // 算出首尾位置
        int end = temp.length() - i * WIDTH;
        int start = max(0, end - WIDTH);
        x = stoi(temp.substr(start, end - start)); // 将start至end字串转为int
        s.push_back(x);
    }
    return *this;
}

BigInteger BigInteger::operator+(const BigInteger &a) {
    BigInteger ret; // 返回结果
//    s 3000|2222|1000   100022223000
//      8000|3333|0          33338000
//      1000|5556|1000   100055561000
    ret.s.clear();
    for (int i = 0, sum = 0;; i++) {
        if (sum == 0 && i >= s.size() && i >= a.s.size()) break;
        if (i < s.size()) sum += s.get(i);
        if (i < a.s.size()) sum += a.s.get(i);
        ret.s.push_back(sum % BASE);
        sum /= BASE; // 记录进位
    }
    return ret;
}

BigInteger BigInteger::operator-(const BigInteger &a) {
    BigInteger ret, b1 = *this, b2 = a;
//        -(333 - 222) = -111
    ret.s.clear();
    bool flag = false; // 小减大，标记后加-号
    if (b1 < b2) { // 保证b1>=b2
        flag = true;
        swap(b1, b2);
    }
//    1111|2000    20001111
//    9999|1000    10009999
//    1222|999      9991222
    for (int i = 0;; i++) {
        int sum = 0; // 借位
        if (i < b1.s.size()) sum += b1.s.get(i);
        if (i < b2.s.size()) sum -= b2.s.get(i);
        // 全部减完后退出
        if (sum == 0 && i + 1 >= b1.s.size() && i + 1 >= b2.s.size()) break;
        // 相减小于零时，向前借位
        if (sum < 0 && i + 1 < b1.s.size()) {
            sum = sum + BASE;
            b1.s.set(i + 1, b1.s.get(i + 1) - 1); // s[i + 1]--
        }
        ret.s.push_back(sum);
    }
    //如果结果为负数，最高段乘上 -1
    if (flag)
        ret.s.set(ret.s.size() - 1,
                  ret.s.get(ret.s.size() - 1) * -1); // ret.s[ret.s.size() - 1] *= -1; // 这样的BigInt无法做后续运算
    return ret;
}

BigInteger BigInteger::operator*(long long int num) const {
//    1111|2000    20001111
//    100000   111100000  2|0000|0000
//    0000|1110|0001|2      200011100000
    BigInteger ret;
    ret.s.clear();
    long long sum = 0;
    for (int i = 0;; i++) { // s中各节数字依次与num相乘
        long long x = sum;
        if (sum == 0 && i >= s.size()) break;
        if (i < s.size()) x += s.get(i) * num;
        ret.s.push_back(x % BASE);
        sum = x / BASE;
    }
    return ret;
}

BigInteger BigInteger::operator*(const BigInteger &b) const {
    BigInteger ret;
    ret.s.clear();
    for (int i = 0; i < s.size(); i++) {
        BigInteger multi;
        multi = b * s.get(i);
        int j = i;
        while (j--) multi = multi * BASE; //向前进位
        ret = ret + multi;
    }
    return ret;
}

BigInteger BigInteger::operator/(const BigInteger &b) const {
    BigInteger ret, c1 = *this, c2 = b;
    ret.s.clear();
    if (*this < b) { // 被除数小于除数，结果为0
        ret = 0;
        return ret;
    } else if (*this == b) { // 被除数等于除数1，结果为1
        ret = 1;
        return ret;
    }
    for (;;) {
//        34567/10   3000
//        24567
//        14567
//        4567/10    400
//        3567
//        2567
//        1567
//        567/10     50
//        67/10      6
//        3000+400+50+6  3456
        c2 = b;
        if (c1 < c2) break; // 一开始c1>c2，每减一次商+1，因为采用向下取整，减到c1<c2就可以了
        long long n = 1, cnt = 0;
        while ((c2 * 10) <= c1) {
            // 一次减10的n次方个，提高减法效率
            n *= 10;
            c2 = c2 * 10;
        }
        while (c2 <= c1) {
            c1 = c1 - c2;
            cnt++;
        }
        ret = ret + (BigInteger) (cnt * n); // 加上商增
    }
    return ret;
}

BigInteger BigInteger::operator%(const BigInteger &b) {
    // ret = *this - *this / b * b
    BigInteger ret;
    ret.s.clear();
    if (*this < b) return *this;
    else if (*this == b) {
        ret = 0;
        return ret;
    }
    ret = (*this) - ((*this) / b * b);
    return ret;
}

bool BigInteger::operator<(const BigInteger &b) const {
//    1111|1111|11   1111111111
//    1110|1111|11   1111111110
    if (s.size() != b.s.size()) return s.size() < b.s.size();
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s.get(i) != b.s.get(i))
            return s.get(i) < b.s.get(i);
    }
    return false;
}

string BigInteger::toString() {
    string temp;
    temp += to_string(s.back());
    for (int i = s.size() - 2; i >= 0; i--) {
        char buf[5];
        sprintf(buf, "%04d", s.get(i));
        temp += buf;
    }
    // 判断结果是不是0
    if (s.getLength() == 1 && s.get(0) == 0) {
        return temp = "0";
    } else {
        string ret; // 去除temp前导0
        bool head = true; // 是否遍历在串首
        for (auto &it:temp) {
            if (head && it != '0') head = false;
            if (!head) ret.push_back(it);
        }
        return ret;
    }
}

ostream &operator<<(ostream &out, const BigInteger &x) {
    BigInteger temp(x);
    out << temp.toString();
//    for (int i = x.s.size() - 2; i >= 0; i--) {
//        char buf[5];
//        sprintf(buf, "%04d", x.s.get(i));
//        out << buf;
//    }
    return out;
}

istream &operator>>(istream &in, BigInteger &x) {
    string s;
    if (!(in >> s)) return in;
    x = s;
    return in;
}
