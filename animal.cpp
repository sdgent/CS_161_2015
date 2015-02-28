// Author: Steven Gentry
// Created:1/6/2015
// Modified:
// Description:animal.cpp :  code snippet example of user input into a string variable
// which is output to console


#include <iostream>
#include <string>

int main()
{
  std::string faveAnimal;
  std::cout << "Please enter your favorite animal" << std::endl;
  std::cin >> faveAnimal;
  std::cout << "Your favorite animal is the " << faveAnimal;
  std::cout << "." << std::endl;

  return 0;
}
