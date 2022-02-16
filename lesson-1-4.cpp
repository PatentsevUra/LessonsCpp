#include <iostream>
#include <cmath>

int main() {
    int r;

    std::cout << "Enter r:";
    std::cin >> r;

    int d = 2 * r;
    int i = 2 * M_PI * r;
    int s = M_PI * pow(r, 2);

    std::cout << "Circle diameter = " << d << std::endl;
    std::cout << "Circumference = " << i << std::endl;
    std::cout << "Circle areas = " << s << std::endl;

    return 0;
}
