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

    if (( a % 10 + b % 10 ) > c ){
        std::cout << "The sum of the last digits in a and b is greater than c" << std::endl;
    } else if (( a % 10 + b % 10 ) < c ){
        std::cout << "The sum of the last digits in a and b is less than c" << std::endl;
    }
    return 0;
}