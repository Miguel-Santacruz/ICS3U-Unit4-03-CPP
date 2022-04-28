// Copyright (c) 2022 Miguel Santacruz All rights reserved
//
// Created by: Miguel Santacruz
// Created on: Apr 2022
// This program shows the square of every number between 0 and input

#include <iostream>
#include <string>

int main() {
    // This function squares numbers

    int number;
    std::string numberAsString;
    int answer;
    float decimal;

    // Input
    std::cout << "Please enter a positive integer: ";
    std::cin >> numberAsString;

    // Process & Output
    try {
        number = std::stoi(numberAsString);
        decimal = std::stof(numberAsString);
        if (number < 0) {
            std::cout << "The number is not positive" << std::endl;
        } else if (number != decimal) {
            std::cout << "The number is not an integer" << std::endl;
        } else {
            for (int loopCounter = 0; loopCounter <= number; loopCounter++) {
                answer = loopCounter * loopCounter;
                std::cout << loopCounter << "² = " << answer << std::endl;
            }
        }
    } catch (std::invalid_argument) {
        std::cout << numberAsString << " is not a number" << std::endl;
    }

    std::cout << "\nDone" << std::endl;
}
