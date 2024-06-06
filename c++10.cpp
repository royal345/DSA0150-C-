#include <iostream>

void swap(int &a, int &b) {
    a ^= b;
    b ^= a;
    a ^= b;
}

int main() {
    int num1, num2;

    // Prompt user to enter two numbers
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Display the numbers before swapping
    std::cout << "Before swapping: ";
    std::cout << "num1 = " << num1 << ", num2 = " << num2 << std::endl;

    // Swap the numbers
    swap(num1, num2);

    // Display the numbers after swapping
    std::cout << "After swapping: ";
    std::cout << "num1 = " << num1 << ", num2 = " << num2 << std::endl;

    return 0;
}

