#include <iostream>

int main() {

    int a;
    int b;
    int c;
    int d;

    std::cout << "Enter the first number:";
    std::cin >> a;

    std::cout << "Enter the second number:";
    std::cin >> b;

    std::cout << "Enter the third number:";
    std::cin >> c;

    std::cout << "Enter the fourth number:";
    std::cin >> d;

    if ((a + b) == ((c + d) % 2) * b) {
        std::cout << "(a + b) is twice the remainder of (c + d) divided by b" << std::endl;
    } else {
        std::cout << "(a + b) is not equal to twice the remainder of (c + d) divided by b" << std::endl;
    }

    return 0;
}
