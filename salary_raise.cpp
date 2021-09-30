// Copyright (c) 2021 Mikayla Barthelette All rights reserved
//
// Created by: Mikayla Barthelette
// Created on: Sept 2021
// This program will show if a worker can earn a raise of 5%

#include <iostream>
#include <iomanip>

int main() {
    // this function determines if you get a raise and calculates the new salary
    const float RAISE = 1.05;

    float salary;
    float yearsOfService;
    float newSalary;

    // Input
    std::cout << "Please enter your salary: ";
    std::cin >> salary;
    std::cout <<
    "Please enter how many years you have worked for the company: ";
    std::cin >> yearsOfService;

    // Process
    if (yearsOfService >= 5) {
        newSalary = salary * RAISE;
        std::cout << std::endl;
        std::cout <<
        "Congratulations! You got a raise of 5%. Your new salary is $"
        << std::fixed << std::setprecision(2) << std::setfill('0') << newSalary
        << std::endl;
    } else {
        std::cout << std::endl;
        std::cout <<
        "You have not worked here long enough to get the raise. " <<
        "Your salary is still $"
        << std::fixed << std::setprecision(2) << std::setfill('0') << salary
        << std::endl;
    }

    // Output
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
