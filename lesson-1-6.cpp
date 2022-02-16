#include <iostream>

int main() {
    std::string input;
    std::cin >> input;

    int size = input.size();

    for (int i = 0; i < size; ++i) {
        std::cout << input[i] << " ";
    }

    return 0;
}