#include <iostream>

int main() {

    int a;
    int b;
    int c;
    int d;

    std::cout << "Enter the first number:";
    std::cin >> a;

    b = a / 100;
    c = (a / 10) % 10;
    d = a % 10;

    if ( b != c && c != d ){
        std::cout << "All digits of a given number are distinct" << std::endl;
    } else {
        std::cout << "The number contains the same numbers" << std::endl;
    }

    return 0;
}

