#include <iostream>
#include <string>

int add(int x, int y); // needed so main.cpp knows that add() is a function defined elsewhere

int
main()
{
    std::string x;
    std::cout << "'You Stupid'"
        << '\n' << "No I not\n"
        << "'Whats _x_<int> plus _y_<int> ?'\n";
    std::cout << "x: ";
    std::cin >> x;
    std::string y;
    std::cout << "y: ";
    std::cin >> y;
    
    std::cout << "'Whats " << x << " plus " << y << "?'\n";
    int res = add(stoi(x), stoi(y));
    std::cout << res << ".\n";
    if (x == "9" && y == "10" && res == 21)
        std::cout << "'You stupid.'\n";
}