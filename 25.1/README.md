# 25.1 Pointers and references to the base class of derived objects.

(link)[https://www.learncpp.com/cpp-tutorial/pointers-and-references-to-the-base-class-of-derived-objects/]

### GOAL

Test out virtual pointers in classes in C++

### Code

Example where a class overrides another class via a virtual constructor

Prints which constructor gets called:

```c++
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
```

### Result

1 is printed. `A`'s constructor is the only one which calls `f()`. This is why there is no override.
