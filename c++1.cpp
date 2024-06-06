#include <iostream>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n <= 1) { // Base case: factorial of 0 or 1 is 1
        return 1;
    } else { // Recursive case
        return n * factorial(n - 1);
    }
}

int main() {
    int number;
    std::cout << "Enter a positive integer: ";
    std::cin >> number;
    
    if (number < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        int result = factorial(number);
        std::cout << "Factorial of " << number << " is " << result << std::endl;
    }
    
    return 0;
}

