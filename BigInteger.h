#ifndef BIGINTEGER_H
#define BIGINTEGER_H


#include "List.h"
#include <string> // 这里只是引用了C++对字符串读入等操作的支持
#include <iostream>

using namespace std;

class BigInteger {
private:
    static const int WIDTH = 4;
    static const int BASE = 10000;
    List<int> s;

public:
    BigInteger(long long num = 0); // 整数构造函数

    BigInteger(const string &str); // 字符串构造函数

    BigInteger &operator=(long long num); // 重载整数赋值

    BigInteger &operator=(const string &str); // 重载字符串复制

    BigInteger operator+(const BigInteger &a); // 重载BigInteger加法

    BigInteger operator-(const BigInteger &a); // 重载BigInteger减法

    BigInteger operator*(long long num) const; // 重载整数乘法

    BigInteger operator*(const BigInteger &b) const; // 重载BigInteger乘法

    BigInteger operator/(const BigInteger &b) const; // 重载BigInteger除法

    BigInteger operator%(const BigInteger &b); // 重载BigInteger取余

    bool operator<(const BigInteger &b) const; // 重载BigInteger小于

    bool operator>(const BigInteger &b) const { return b < *this; } // 重载BigInteger大于

    bool operator<=(const BigInteger &b) const { return !(b < *this); } // !(*this>b) 重载BigInteger小于等于

    bool operator>=(const BigInteger &b) const { return !(*this < b); } // 重载BigInteger大于等于

    bool operator!=(const BigInteger &b) const { return (b < *this) || (*this < b); } // 重载BigInteger不等于

    bool operator==(const BigInteger &b) const { return !(b < *this) && !(*this < b); } // 重载BigInteger等于

    string toString(); // 将存在s中的数字形式转化为字符串形式

    friend ostream &operator<<(ostream &out, const BigInteger &x); // 重载输出流

    friend istream &operator>>(istream &in, BigInteger &x); // 重载输入流
};

#endif // BIGINTEGER_H
