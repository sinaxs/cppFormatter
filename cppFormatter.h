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

namespace cppFormatter {

  std::string printRedLine();

  std::string printYellowLine();

  std::string printRedDoubleLine();

  std::string printYellowDoubleLine();

  std::string printLine();

  void typingPrint(const string &message, unsigned int millis_per_char);

  void typingPrint(const string &message);

//////////////////////////////////////////////////////////////////////

  template <class TYPE>
  inline std::string printRed(TYPE data) {
    std::ostringstream s;
    s << "\033[0;31m" << data << "\033[0m";
    return s.str();
  };

  template <class TYPE>
  inline std::string printRedB(TYPE data) {
    std::ostringstream s;
    s << "\033[1;31m" << data << "\033[0m";
    return s.str();
  };

  template <class TYPE>
  inline std::string printYellow(TYPE data){
    std::ostringstream s;
    s << "\033[0;33m" << data << "\033[0m";
    return s.str();
  };

  template <class TYPE>
  inline std::string printYellowB(TYPE data){
    std::ostringstream s;
    s << "\033[1;33m" << data << "\033[0m";
    return s.str();
  };

  template <class TYPE>
  inline std::string printBold(TYPE data){
    std::ostringstream s;
    s << "\033[1;1m" << data << "\033[0m";
    return s.str();
  };

  template <class TYPE>
  inline std::string printColor(TYPE data, std::string color){
    std::ostringstream s;

    std::string color_code = "";

      if(color == "black"       )  color_code = "\033[0;30m";
      if(color == "blue"        )  color_code = "\033[0;34m";
      if(color == "green"       )  color_code = "\033[0;32m";
      if(color == "cygan"       )  color_code = "\033[0;36m";
      if(color == "red"         )  color_code = "\033[0;31m";
      if(color == "purple"      )  color_code = "\033[0;35m";
      if(color == "brown"       )  color_code = "\033[0;33m";
      if(color == "light_gray"  )  color_code = "\033[0;37m";
      if(color == "dark_gray"   )  color_code = "\033[1;30m";
      if(color == "light_blue"  )  color_code = "\033[1;34m";
      if(color == "light_green" )  color_code = "\033[1;32m";
      if(color == "light_cygan" )  color_code = "\033[1;36m";
      if(color == "light_red"   )  color_code = "\033[1;31m";
      if(color == "light_purple")  color_code = "\033[1;35m";
      if(color == "yellow"      )  color_code = "\033[1;33m";
      if(color == "white"       )  color_code = "\033[1;37m";

    s << color_code << data << "\033[0m";
    return s.str();
  };

  template <class TYPE>
  inline std::string printColorBack(TYPE data, string color){
    std::ostringstream s;

    std::string color_code = "";

      if(color == "black"       )  color_code = "\033[0;40m";
      if(color == "blue"        )  color_code = "\033[0;44m";
      if(color == "green"       )  color_code = "\033[0;42m";
      if(color == "cygan"       )  color_code = "\033[0;46m";
      if(color == "red"         )  color_code = "\033[0;41m";
      if(color == "purple"      )  color_code = "\033[0;45m";
      if(color == "brown"       )  color_code = "\033[0;43m";
      if(color == "light_gray"  )  color_code = "\033[0;47m";
      if(color == "dark_gray"   )  color_code = "\033[1;40m";
      if(color == "light_blue"  )  color_code = "\033[1;44m";
      if(color == "light_green" )  color_code = "\033[1;42m";
      if(color == "light_cygan" )  color_code = "\033[1;46m";
      if(color == "light_red"   )  color_code = "\033[1;41m";
      if(color == "light_purple")  color_code = "\033[1;45m";
      if(color == "yellow"      )  color_code = "\033[1;43m";
      if(color == "white"       )  color_code = "\033[0;30m\033[1;47m";


    s << color_code << data << "\033[0m";
    return s.str();
  };

  inline std::string Line(char style) {
    std::string line(48,style);
    return line;
  };

  inline std::string moveCursorLineUp(int n) {
    return "\033[" + std::to_string(n) + "A";
  };

  inline std::string removeLine() {
    return "\033[K";
  };

  inline void clearScreen() {
    std::cout <<  "\033[H";
  }

}

//////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////

#endif //CPPFORMATTER_H
