/*****************************************************
  
  Project       [approximate_arithmetic]
  
  FileName      [formatFUN]
  
  Author        [Sina Boroumand]
  
  Affilation    [UT DSD Lab]
  
  Date          [February 27, 2018]
  
*****************************************************/

#include "cppFormatter.h"

template <class TYPE>
std::string printRed(TYPE data) {
    std::ostringstream s;
    s << "\033[1;31m" << data << "\033[0m";
    return s.str();
}

template <class TYPE>
std::string printYellow(TYPE data) {
    std::ostringstream s;
    s << "\033[1;33m" << data << "\033[0m";
    return s.str();
}

// std::string printRed(std::string data) {
//     return "\033[1;31m" + data + "\033[0m";
// }

// std::string printYellow(std::string data) {
//     return "\033[1;33m" + data + "\033[0m";
// }

std::string printRedLine() {
    return printRed("------------------------------------------");
}

std::string printRedDoubleLine() {
    return printRed("==========================================");
}

std::string printYellowLine() {
    return printYellow("------------------------------------------");
}

std::string printYellowDoubleLine() {
    return printYellow("==========================================");
}

std::string printLine() {
    return printRed("------------------------------------------");
}

// std::string printRed(int data) {
//     return "\033[1;31m" + std::to_string(data) + "\033[0m";
// }

// std::string printYellow(int data) {
//     return "\033[1;33m" + std::to_string(data) + "\033[0m";
// }

void typingPrint(const string &message, unsigned int millis_per_char){
    // Range loops are "for each" constructs; here: for each character in the string
    for (const char c: message)
    {
        // flush is used to make sure the buffer is emptied to the terminal immediately
        cout << c << flush;

        // Ask the thread to sleep for at least n millis.
        sleep_for(milliseconds(millis_per_char));
    }
}

void typingPrint(const string &message){
    // Range loops are "for each" constructs; here: for each character in the string
    for (const char c: message)
    {
        // flush is used to make sure the buffer is emptied to the terminal immediately
        cout << c << flush;

        // Ask the thread to sleep for at least n millis.
        sleep_for(milliseconds(20));
    }
}
