#include <iostream>

int main() {
    char ch;

    // Prompt user to enter a character
    std::cout << "Enter a character: ";
    std::cin >> ch;

    // Convert character to lowercase to handle both uppercase and lowercase input
    ch = tolower(ch);

    // Check if the character is a vowel or consonant
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        std::cout << ch << " is a vowel." << std::endl;
    } else if ((ch >= 'a' && ch <= 'z')) {
        std::cout << ch << " is a consonant." << std::endl;
    } else {
        std::cout << ch << " is not an alphabet letter." << std::endl;
    }

    return 0;
}

