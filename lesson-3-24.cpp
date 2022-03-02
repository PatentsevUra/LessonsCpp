#include <iostream>

int main() {

    int a;

    std::cout << "Enter the number:";
    std::cin >> a;

    std::string s = std::to_string(std::abs(a));

    int length = s.size();

    std::cout << "Number of digits in number: " << length;

    return 0;
}