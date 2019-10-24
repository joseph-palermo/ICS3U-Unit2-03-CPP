// Copyright (c) 2019 Joseph Palermo All rights reserved.
//
// Created by: Joseph Palermo
// Created on: October 2019
// This program calculates the circumference of a circle using tau and radius

#include <iostream>

int main() {
    // this function calculates the circumference of a circle using tau and
    //  radius

    // constants, and variables
    const double TAU = 6.28;
    int radius;
    double circumference;

    // input
    std::cout << "Enter radius of circle (mm): ";
    std::cin >> radius;

    // process
    circumference = TAU*radius;

    // output
    std::cout << "Circumference is " << circumference << "mm" << std::endl;
}
