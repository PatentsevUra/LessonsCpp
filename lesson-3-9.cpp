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

    int counter = 0;

    if (a % 2 != 0) counter++;
    if (b % 2 != 0) counter++;
    if (c % 2 != 0) counter++;
    if (d % 2 != 0) counter++;

    if (counter >= 2) {
        std::cout << "There are at least 2 odd numbers among the numbers" << std::endl;
    } else {
        std::cout << "there are no 2 odd numbers among the numbers" << std::endl;
    }

    return 0;
}

