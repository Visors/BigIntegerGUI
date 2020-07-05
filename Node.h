#ifndef NODE_H
#define NODE_H

#include <ostream>

template<typename T>
class Node {
private:
    T meta; // 模板类型数据
    Node *prev; // 前驱指针
    Node *next; // 后继指针
public:
    Node() = default; // 默认构造函数

    Node(T meta, Node *prev, Node *next) : meta(meta), prev(prev), next(next) {} // 重载构造函数

    virtual ~Node() = default; // 默认析构函数

    T getMeta() const { // 元素值Getter
        return meta;
    }

    void setMeta(T meta) { // 元素值Setter
        Node::meta = meta;
    }

    Node *getPrev() const { // 前驱指针Getter
        return prev;
    }

    void setPrev(Node *prev) { // 前驱指针Setter
        Node::prev = prev;
    }

    Node *getNext() const { // 后继指针Getter
        return next;
    }

    void setNext(Node *next) { // 后继指针Setter
        Node::next = next;
    }

    friend std::ostream &operator<<(std::ostream &os, const Node &node) { // 调试用重载元素输出流
        os << "meta: " << node.meta << " prev: " << node.prev << " next: " << node.next;
        return os;
    }

};

#endif // NODE_H
