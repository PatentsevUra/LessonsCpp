#include <iostream>
int main() {

    int a;
    int b;
    int c;

    std::cout << "Enter the first number:";
    std::cin >> a;

    std::cout << "Enter the second number:";
    std::cin >> b;

    std::cout << "Enter the third number:";
    std::cin >> c;

    std::cout << std::boolalpha
              << (a < b && b < c) << std::endl;
}

