/*****************************************************
  
  Project       [approximate_arithmetic]
  
  FileName      [formatFUN]
  
  Author        [Sina Boroumand]
  
  Affilation    [UT DSD Lab]
  
  Date          [February 27, 2018]
  
*****************************************************/

#ifndef APPROXIMATE_ARITHMETIC_FORMATFUN_H
#define APPROXIMATE_ARITHMETIC_FORMATFUN_H

#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using std::cout;
using std::flush;
using std::string;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;

std::string printYellow(std::string data);

std::string printRed(std::string data);

std::string printRedLine();

std::string printYellowLine();

std::string printRedDoubleLine();

std::string printYellowDoubleLine();

std::string printLine();

std::string printRed(int data);

std::string printYellow(int data);

void typingPrint(const string &message, unsigned int millis_per_char);

void typingPrint(const string &message);

#endif //APPROXIMATE_ARITHMETIC_FORMATFUN_H
