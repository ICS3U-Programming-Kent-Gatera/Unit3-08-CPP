// Copyright [2022] <Mr. Kent>"  [legal/copyright]
//
// Date : 10 - 17 - 22
// This program checks if a year is a leap year.

#include <iostream>

int main() {
    // Initializing year variables
    int userYearInt;
    std::string userYearStr;

    // Basic info about the program
    std::cout << "This is a program that is used for calculating a leap year.\n ";

    // Gets the user's year
    std::cout << "Input the year you wish to calculate: ";
    std::cin >> userYearStr;
    std::cout << "\n";

    // Tries to catch any invalid inputs
    try {
        userYearInt = std::stoi(userYearStr);

        // # Restarts the program is invalided input found
    } catch (std::invalid_argument) {
        std::cout << "Your input  ";
        std::cout << userYearStr << " is not valid (e.g. 2020)\n";
        return main();
    }

    // First check if the user input can be divisible by 4
    if (userYearInt % 4 == 0) {
        // Second check if the user input can be divisible by 100
        if (userYearInt % 100 == 0) {
            // Third check if the user input can be divisible by 400
            if (userYearInt % 400 == 0) {
                std::cout << userYearInt << " is a leap year!\n";
                // Code to be ran if the can't be divided by 400
            } else {
                std::cout << userYearInt << " is not a leap year!\n.";
            }
            // Code to be ran if the can't be divided by 100.
        } else {
            std::cout << userYearInt << " is a leap year!\n";
        }
        // Code to be ran if the can't be divided by 4
    } else {
        std::cout << userYearInt << " is not a leap year!\n";
    }
}