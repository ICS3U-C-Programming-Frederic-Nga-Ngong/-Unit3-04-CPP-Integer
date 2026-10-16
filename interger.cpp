// Copyright (c) Year Your Name All rights reserved.
// .
// Created by: Fred
// Date: Feb 18 2008
// Checks if a number is positive, negative or just zero

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
