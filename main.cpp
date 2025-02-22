#include <iostream>
#include <cctype> // Include for toupper

int main() {
    char grade;

    while (true) { // Infinite loop until a valid grade is entered
        std::cout << "What letter grade? (A-F): ";
        std::cin >> grade;

        // Check if input is a single character and convert to uppercase
        if (std::isalpha(grade)) {
            grade = std::toupper(grade);

            // If the grade is a valid letter grade, break out of the loop
            if (grade >= 'A' && grade <= 'F') {
                break; // Valid grade entered
            }
        }

        // If we reach here, the input was invalid
        std::cout << "Invalid input. Please enter a letter grade (A-F).\n";
    }

    switch (grade) {
    case 'A':
        std::cout << "You did great";
        break;
    case 'B':
        std::cout << "You did good";
        break;
    case 'C':
        std::cout << "You did alright";
        break;
    case 'D':
        std::cout << "You did bad unfortunately";
        break;
    case 'F':
        std::cout << "You failed";
        break;
    default:
        // This point should never be reached due to previous validation
        std::cout << "Unexpected error.";
        break;
    }

    return 0;
}
