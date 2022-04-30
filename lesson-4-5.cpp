#include <iostream>

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i + 1; j++)
            std::cout << "*";
        std::cout << "\n";
    }

    std::cout << "\n";

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            if (i > j) std::cout << " ";
            else std::cout << "*";
        std::cout << "\n";
    }

    std::cout << "\n";

    for (int i = 1; i <= n; i++) {
        for (int j = n; j >= i; j--)
            std::cout << "*";
        std::cout << "\n";
    }

    std::cout << "\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j < n - i - 1) {
                std::cout << std::string(1, ' ');
            } else {
                std::cout << "*";
            }
        }

        std::cout << std::endl;
    }

    return 0;
}