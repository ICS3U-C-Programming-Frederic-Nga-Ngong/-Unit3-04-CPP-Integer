// Copyright (c) Year Your Name All rights reserved.
// .
// Created by: Your Name
// Date: Month Day, Year
// Write what this program does.

#include<iostream>

int main() {
    float number;

    // Get the number form the user
    std::cout << "Enter a number\n";
    std::cin >> number;

    // Checks if the number is positive
    if ( number > 0 ) {
        std::cout << number << "  is positive";

        // Checks if the number is just zero
    } else if ( number == 0 ) {
        std::cout << number << "  is just zero";

        // Checks if the number is negative
    } else  {
        std::cout << number << "  is negative";}}
