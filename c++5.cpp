#include <iostream>

int main() {
    float num1, num2;

    // Prompt user to enter two floating-point numbers
    std::cout << "Enter the first floating-point number: ";
    std::cin >> num1;
    std::cout << "Enter the second floating-point number: ";
    std::cin >> num2;

    // Perform arithmetic operations
    float sum = num1 + num2;
    float difference = num1 - num2;
    float product = num1 * num2;
    float quotient;

    // Ensure that division is valid (avoid division by zero)
    if (num2 != 0) {
        quotient = num1 / num2;
    } else {
        std::cout << "Division by zero is undefined." << std::endl;
        return 1; // Exit the program with an error code
    }

    // Display the results
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;
    std::cout << "Product: " << product << std::endl;
    std::cout << "Quotient: " << quotient << std::endl;

    return 0;
}

