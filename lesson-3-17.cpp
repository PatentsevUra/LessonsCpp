#include <iostream>


int main() {
    int a;
    int b;

    std::cout << "enter the first number:";
    std::cin >> a;

    std::cout << "enter the second number:";
    std::cin >> b;

    std::cout << std::boolalpha
              << ( a == b && b == a) << std::endl;

    return 0;
}

