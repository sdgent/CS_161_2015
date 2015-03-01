// Author: Steven Gentry
// Created:1/12/2015
// Last Modified:
// Description: tempConvert.cpp
// User inputs Celsius temp and it is converted to Fahrenheit and outputs to console

#include <iostream>

main()
{
    double celsius;
    std::cout << "Enter degrees in Celsius" << std::endl;
    std::cin >> celsius;
    std::cout << (9/5 * celsius)+32 << " degrees Fahrenheit";
    return 0;
}
