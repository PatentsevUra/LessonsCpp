#include <iostream>


int main() {
    int a;
    int b;

    std::cout << "Enter the first number:";
    std::cin >> a;

    std::cout << "Enter the second number:";
    std::cin >> b;

    if ( a < b ){
        std::cout << (" a < b ") << std::endl;
    } else if ( a > b ){
        std::cout << (" a > b ") << std::endl;
    } else {
        std::cout << (" a = b ") << std::endl;
    }

    return 0;
}

