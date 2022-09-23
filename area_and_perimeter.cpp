// Copyright (c) 2022 Joanne Santhosh All rights reserved
//
// Created by: Joanne Santhosh
// Created on: Sept 2022
// This program calculates the area and perimeter of a circle

#include <cmath>
#include <iostream>

int main() {
    // This function calculates the area and perimeter

    std::cout << "A circle has a radius of 15mm: " << std::endl;
    std::cout << std::endl;
    std::cout << "The area is " << (M_PI * pow(15, 2)) << " mm²." << std::endl;
    std::cout << "The perimeter is " << (2 * M_PI * 15) << " mm." << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
