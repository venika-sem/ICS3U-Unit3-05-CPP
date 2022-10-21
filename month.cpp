// Copyright (c) 2022 Venika Sem All rights reserved
//
// Created by: Venika Sem
// Created on: Oct 2022
// This program tells the month based on a number

#include <cmath>
#include <iostream>

int main() {
    // this function tells the month based on a number
    int monthNumber;

    // input
    std::cout << "Enter a number of a month: ";
    std::cin >> monthNumber;

    // process & output
    switch (monthNumber) {
        case 1:
            std::cout << "January" << std::endl;
            break;
        case 2:
            std::cout << "February" << std::endl;
            break;
        case 3:
            std::cout << "March" << std::endl;
            break;
        case 4:
            std::cout << "April" << std::endl;
            break;
        case 5:
            std::cout << "May" << std::endl;
            break;
        case 6:
            std::cout << "June" << std::endl;
            break;
        case 7:
            std::cout << "July" << std::endl;
            break;
        case 8:
            std::cout << "August" << std::endl;
            break;
        case 9:
            std::cout << "September" << std::endl;
            break;
        case 10:
            std::cout << "October" << std::endl;
            break;
        case 11:
            std::cout << "November" << std::endl;
            break;
        case 12:
            std::cout << "December" << std::endl;
            break;
        default:
            std::cout << "Invalid input, not a month" << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
