#ifndef LIST_H
#define LIST_H

#include <ostream>
#include "Node.h"

template<typename T>
class List {
private:
    Node<T> *head; // 链表头
    Node<T> *tail; // 链表尾
    int length; // 链表元素个数（长度）
public:
    List() { // 无参构造函数
        head = new Node<T>;
        tail = new Node<T>;
        head->setNext(tail);
        tail->setPrev(head);
        length = 0;
    }

    virtual ~List() = default; // 默认析构函数

    Node<T> *getHead() const { // 链表头指针Getter
        return head;
    }

    void setHead(Node<T> *head) { // 链表头指针Setter
        List::head = head;
    }

    Node<T> *getTail() const { // 链表尾指针Getter
        return tail;
    }

    void setTail(Node<T> *tail) { // 链表尾指针Setter
        List::tail = tail;
    }

    int getLength() const { // 链表元素个数Getter
        return length;
    }

    void setLength(int length) { // 链表元素个数Setter
        List::length = length;
    }

    int size() const { // 符合vector使用习惯的返回元素个数函数
        return length;
    }

    void push_back(T add) { // 符合vector使用习惯的向表尾插入元素函数
        auto *tmp = new Node<T>;
        tmp->setMeta(add);
        tmp->setPrev(tail->getPrev());
        tail->getPrev()->setNext(tmp);
        tmp->setNext(tail);
        tail->setPrev(tmp);
        length++;
    }

    void clear() { // 符合vector使用习惯的清空表函数
        head = new Node<T>;
        tail = new Node<T>;
        head->setNext(tail);
        tail->setPrev(head);
        length = 0;
    }

    T back() const { // 符合vector使用习惯的返回末尾元素函数
        if (length > 0) return tail->getPrev()->getMeta();
        else return T();
    }

    T get(int pos) const { // 返回第pos个元素
        if (pos >= length) pos = length - 1;
        Node<T> *temp = head->getNext();
        while (pos--) temp = temp->getNext();
        return temp->getMeta();
    }

    void set(int pos, int meta) const { // 设置第pos个元素
        if (pos >= length) pos = length - 1;
        Node<T> *temp = head->getNext();
        while (pos--) temp = temp->getNext();
        temp->setMeta(meta);
    }

//    T &operator[](const int &pos){
//        int p = pos;
//        if (pos >= length) p = length - 1;
//        Node<T> *temp = head;
//        while (p--) temp = temp->getNext();
//        return temp->getMeta();
//    }

    friend std::ostream &operator<<(std::ostream &os, const List<T> &list) { // 调试用重载链表输出流
        Node<T> *pos = list.head;
        pos = pos->getNext();
        while (pos != list.getTail()) {
            os << *pos << std::endl;
            pos = pos->getNext();
        }
        return os;
    }
};

#endif // LIST_H
