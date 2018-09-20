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
#include <sstream> 

using std::cout;
using std::flush;
using std::string;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;

std::string printRedLine();

std::string printYellowLine();

std::string printRedDoubleLine();

std::string printYellowDoubleLine();

std::string printLine();

void typingPrint(const string &message, unsigned int millis_per_char);

void typingPrint(const string &message);

template <class TYPE>
std::string printRed(TYPE data);

template <class TYPE>
std::string printYellow(TYPE data);


#endif //APPROXIMATE_ARITHMETIC_FORMATFUN_H
