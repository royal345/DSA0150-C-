#include <iostream>
#include <cmath>

int main() {
    double number;

    // Prompt user to enter a floating-point number
    std::cout << "Enter a floating-point number: ";
    std::cin >> number;

    // Use floor and ceil functions to round the number
    int floorValue = static_cast<int>(std::floor(number));
    int ceilValue = static_cast<int>(std::ceil(number));

    // Determine the nearest integer
    int roundedValue;
    if ((number - floorValue) < (ceilValue - number)) {
        roundedValue = floorValue;
    } else {
        roundedValue = ceilValue;
    }

    // Display the results
    std::cout << "Number: " << number << std::endl;
    std::cout << "Floor value: " << floorValue << std::endl;
    std::cout << "Ceil value: " << ceilValue << std::endl;
    std::cout << "Rounded to nearest integer: " << roundedValue << std::endl;

    return 0;
}

