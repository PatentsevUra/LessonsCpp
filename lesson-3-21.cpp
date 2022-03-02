#include <iostream>
#include <sstream>

int main() {
    std::string input;
    std::cout << "Enter number:";
    std::cin >> input;

    std::stringstream ss;
    int inputLength = input.length();

    for (int i = inputLength - 1; i >= 0; i--) {
        ss << input[i];
    }

    if (input == ss.str()) {
        std::cout << "The number is a palindrome" << std::endl;
    } else {
        std::cout << "The number is not a palindrome" << std::endl;
    }

    return 0;
}