#include <iostream>
#include <cmath>

int main() {
    float r;

    std::cout << "Enter r:";
    std::cin >> r;

    float d = 2 * r;
    float i = 2 * M_PI * r;
    float s = M_PI * pow(r, 2);

    std::cout << "Circle diameter = " << d << std::endl;
    std::cout << "Circumference = " << i << std::endl;
    std::cout << "Circle areas = " << s << std::endl;

    return 0;
}
