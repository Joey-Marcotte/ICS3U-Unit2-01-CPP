// Copyright (c) 2019 Joey Marcotte All rights reserved
//
// Created by: Joey Marcotte
// Created on: September 2019
// This program does math for a circle


#include <iostream>
#include <cmath>

int main() {
    std::cout << "If a circle has a radius of 15mm:" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Area is " << (M_PI*pow(15.0, 2.0)) << "=mm^2" << std::endl;
    std::cout << "Perimeter is " << (2*M_PI*15) << "=mm" << std::endl;
}
