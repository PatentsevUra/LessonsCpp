#include <iostream>

int main() {

    float p;

    std::cout << "P:";

    std::cin >> p;

    int k = 1;
    int s = 1000;

    while (s <= 1100) {
        ++k;
        s = s + s * p / 100;
    }

    std::cout << "number of months: " << k << std::endl;
    std::cout << "final deposit amount: " << s << std::endl;

    return 0;
}