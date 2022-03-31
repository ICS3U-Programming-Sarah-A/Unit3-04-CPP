// Copyright (c) 2022 Sarah All rights reserved.
//
// Created by: Sarah
// Created on: Mar, 31, 2022
// This program asks the user to enter a number. It then
// checks if the number entered is either positive, negative, or zero.


#include <iostream>

int main() {
  // declare variable
  int userNumber;

  // get number from what the user entered
  std::cout << "Enter an integer: ";
  std::cin >> userNumber;
  std::cout << "" << std::endl;

  // check to see if number guessed is equalled to the correct number
  if (userNumber > 0) {
    std::cout << userNumber << " is a positive number";
  } else if (userNumber < 0) {
    std::cout << userNumber << " is a negative number";
  } else if (userNumber == 0) {
  std::cout << userNumber << " is just zero";
} }
