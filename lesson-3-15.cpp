#include <iostream>

int main() {

    int a;
    int b;

    std::cout << "Enter the first number:";
    std::cin >> a;

    std::cout << "Enter the second number:";
    std::cin >> b;

    std::cout << std::boolalpha
              << (a % 2 == 0 && b % 2 != 0) << std::endl;

    return 0;
}