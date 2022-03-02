#include <iostream>

int main() {

    int n;
    int k = 1;
    int a = 3;

    std::cout << "N:";
    std::cin >> n;

    while (a <= n){
        a *= 3;
        ++k;
    }

    std::cout << "The smallest number of K: " << k << std::endl;

    return 0;
}