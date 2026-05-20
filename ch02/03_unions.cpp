#include <iostream>
#include <string>
#include <variant>

using namespace std;

enum class Type { ptr, num }; // a Type holds either a pointer or a number

class Node {};

// p and i share the same memory, but we can only use one of them at a time
// the size of a union is the size of its largest member
union Value {
    Node *p;
    int i;
};

struct Entry {
    string name;
    Type t;  // indicates which member of the union is currently in use
    Value v; // use v.p if t == Type::ptr, v.i if t == Type::num
};

void f(Entry *pe) {
    if (pe->t == Type::num) {
        // use pe->v.i
    } else {
        // use pe->v.p
    }
}

// the usage of "naked" unions should be minized
struct Entry2 {
    string name;
    std::variant<Node *, int> v;
};

void f2(Entry2 *pe) {
    if (std::holds_alternative<int>(pe->v)) {
        std::cout << std::get<int>(pe->v) << std::endl;
    } else {
        std::cout << std::get<Node *>(pe->v) << std::endl;
    }
}
