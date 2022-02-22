#include <iostream>


int main() {

    int a;
    int b;

    std::cout << "Enter an integer: ";
    std::cin >> a;

    std::cout << "Enter an integer: ";
    std::cin >> b;

    if (a % 2 == 0 && b % 2 == 0) {
        std::cout << ("It's an even number \n");
    } else {
        std::cout << ("It's an odd number");


    }

    return 0;
}
