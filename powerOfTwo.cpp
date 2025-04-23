// Copyright (c) 2025 Gustav I
// Created By: Gustav I
// Date: April 14, 2025
// This program asks the user for squareable number
// It then calculates the square of the numbers until the input.

#include <iostream>
#include <string>

int main() {
    std::string input;
    int user_num;

    std::cout << "Enter a whole number: ";
    std::cin >> input;

    // Simple check: make sure all characters are digits using char
    for (char c : input) {
        if (c < '0' || c > '9') {
            std::cout << "Invalid input! Please enter a valid whole number.\n";
            return 1;
        }
    }

    user_num = std::stoi(input);

    if (user_num < 0) {
        std::cout << "Please enter a non-negative whole number.\n";
        return 1;
    }

    for (int i = 0; i <= user_num; ++i) {
        int square = i * i;
        std::cout << i << "^2 = " << square << std::endl;
    }

    return 0;
}
