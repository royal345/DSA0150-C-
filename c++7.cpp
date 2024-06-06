#include <iostream>

int main() {
    int number;

    // Prompt user to enter a number
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Check if the number is positive, negative, or zero
    if (number > 0) {
        std::cout << number << " is positive." << std::endl;
    } else if (number < 0) {
        std::cout << number << " is negative." << std::endl;
    } else {
        std::cout << "The number is zero." << std::endl;
    }

    return 0;
}

