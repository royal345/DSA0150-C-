#include <iostream>

int main() {
    int number;

    // Prompt user to enter an integer
    std::cout << "Enter an integer: ";
    std::cin >> number;

    // Determine if the number is odd or even
    if (number % 2 == 0) {
        std::cout << number << " is even." << std::endl;
    } else {
        std::cout << number << " is odd." << std::endl;
    }

    return 0;
}

