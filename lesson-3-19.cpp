#include <iostream>

int main() {

    int a;
    int b;
    int sum = 0;

    std::cout << "Enter the first number:";
    std::cin >> a;

    std::cout << "Enter the second number:";
    std::cin >> b;

    for (int i = a; i <= b; i++) {
        sum = sum + i;
    }

    std::cout << "Sum of numbers from a to d = " << sum << std::endl;

    return 0;
}

