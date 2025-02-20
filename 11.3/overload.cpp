#include <iostream>
#include <string>

using namespace std; 

void print(int x) 
{
    cout << "integer overload\n";
}

void print(double x)
{
    cout << "double overload\n";
}

void print(string x)
{
    cout << "string overload\n";
}

int main()
{
    cout << "42\n";    
    print(42); // exact match
               //
    cout << "const\n";
    const int a = 99;
    print(a); // trivial conversion: const to non-const

    cout << "char b\n";
    print('b'); // expect int, numeric promotion of char to int
    cout << "4.2\n";
    print('4.2'); // int

    print(4.2);

    // print(5L); // long
    // ambiguous match, will not compile
}
