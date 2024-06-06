#include <iostream>

int main() {
    int num1, num2;

    // Prompt user to enter two integers
    std::cout << "Enter first integer: ";
    std::cin >> num1;
    std::cout << "Enter second integer: ";
    std::cin >> num2;

    // Perform arithmetic operations
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    float quotient;
    int remainder;

    // Ensure that division and modulo are valid (avoid division by zero)
    if (num2 != 0) {
        quotient = static_cast<float>(num1) / num2;
        remainder = num1 % num2;
    } else {
        std::cout << "Division and modulo by zero are undefined." << std::endl;
        return 1;
    }

    // Display the results
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;
    std::cout << "Product: " << product << std::endl;
    std::cout << "Quotient: " << quotient << std::endl;
    std::cout << "Remainder: " << remainder << std::endl;

    return 0;
}

