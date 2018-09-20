/*****************************************************
  
  Project       [approximate_arithmetic]
  
  FileName      [formatFUN]
  
  Author        [Sina Boroumand]
  
  Affilation    [UT DSD Lab]
  
  Date          [February 27, 2018]
  
*****************************************************/

#ifndef CPPFORMATTER_H
#define CPPFORMATTER_H

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

//////////////////////////////////////////////////////////////////////

template <class TYPE>
std::string printRed(TYPE data) {
    std::ostringstream s;
    s << "\033[0;31m" << data << "\033[0m";
    return s.str();
};

template <class TYPE>
std::string printRedB(TYPE data) {
    std::ostringstream s;
    s << "\033[1;31m" << data << "\033[0m";
    return s.str();
};

template <class TYPE>
std::string printYellow(TYPE data){
    std::ostringstream s;
    s << "\033[0;33m" << data << "\033[0m";
    return s.str();
};

template <class TYPE>
std::string printYellowB(TYPE data){
    std::ostringstream s;
    s << "\033[1;33m" << data << "\033[0m";
    return s.str();
};

template <class TYPE>
std::string printBold(TYPE data){
    std::ostringstream s;
    s << "\033[1;1m" << data << "\033[0m";
    return s.str();
};

#endif //CPPFORMATTER_H
