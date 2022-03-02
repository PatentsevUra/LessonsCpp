#include <iostream>
#include <vector>

int main() {
    std::string input;
    std::cout << "Enter number:";
    std::cin >> input;
    int inputSize = input.size();

    if (inputSize != 6) {
        std::cout << "Error!" << std::endl;
        return -1;
    }

    std::vector<int> numbers(6);

    for(std::string::size_type i = 0; i < inputSize; ++i) {
        numbers[i] = input[i];
    }

    int leftSum = numbers[0] + numbers[1] + numbers[2];
    int rightSum = numbers[3] + numbers[4] + numbers[5];

    if (leftSum == rightSum) {
        std::cout << "Your ticket is lucky!" << std::endl;
    } else {
        std::cout << "Your ticket is not happy" << std::endl;
    }

    return 0;
}

