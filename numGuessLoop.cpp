// Copyright (2025) Aaron Rivelino All rights reserved.
// Date: April 23, 2025
// Is a guessing number program that loops until the user guess the number

#include <cstdlib>
#include <iostream>
#include <string>

int main() {
    // State the user input as a string
    std::string guessNumberStr;
    // State the other variables
    int randomNumber;
    int guess;
    float guessFloat;

    // Get the random seed for the random number
    srand((unsigned)time(NULL));

    // Generate the random number between 1 and 9
    randomNumber = rand() % 9 + 1;

    // State while true, to loop the program until the user is correct
    while (true) {
        // get the user input as a string
        std::cout << "Guess a number between 1 and 9: ";
        std::cin >> guessNumberStr;

        // Try catch if the user input is not a whole number
        try {
            // Convert string to float and int to check for decimals
            guessFloat = std::stof(guessNumberStr);
            guess = std::stoi(guessNumberStr);

            // Compare the float an integer, to check if there are no decimals
            if (guessFloat != guess) {
                std::cout << "\nIt has decimals. Enter a whole number.\n"
                          << std::endl;

                // Check if the number is between 1 and 9 using OR
                } else if (guess < 1 || guess > 9) {
                std::cout << "\nNumber needs to be between 1-9.\n"
                          << std::endl;

                // If guess is wrong
                } else if (guess != randomNumber) {
                std::cout << guess << " is not the correct number. Try again.\n"
                          << std::endl;

                // If guess is correct
                } else {
                std::cout << "You got the right number!\n"
                << std::endl;

                // Break to stop the loop
                break;
            }

        // Exception with catch statement for invalid input
        } catch (...) {
            std::cout << "\nInvalid input. Please enter a whole number.\n"
                      << std::endl;
        }
    }

    // Final message when the user guesses the right number
    std::cout << "Thanks for playing." << std::endl;
    return 0;
}
