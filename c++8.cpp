#include <iostream>

int main() {
    int num1, num2;

    // Prompt user to enter two integers
    std::cout << "Enter the first integer: ";
    std::cin >> num1;
    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    // Determine which number is greater
    if (num1 > num2) {
        std::cout << num1 << " is greater than " << num2 << "." << std::endl;
    } else if (num2 > num1) {
        std::cout << num2 << " is greater than " << num1 << "." << std::endl;
    } else {
        std::cout << num1 << " and " << num2 << " are equal." << std::endl;
    }

    return 0;
}

