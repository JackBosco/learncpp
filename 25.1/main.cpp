#include <iostream>

struct A{
    virtual void f() { std::cout << "1"; }
    A() { f(); }
};

struct B: A {
    virtual void f() override { std::cout << "2"; }
};


int main() {
    B b;
    return 0;
}
