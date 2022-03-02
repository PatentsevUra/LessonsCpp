#include <iostream>

int main() {

    int a;
    int b;
    int i;

    std::cout << "a:";
    std::cin >> a;

    std::cout << "b:";
    std::cin >> b;

    for (i = b - 1; i > a; --i){
        std::cout << i << std::endl;
    }

    std::cout << "Number of printed numbers:" << (b - a - 1) << std::endl;

    return 0;
}