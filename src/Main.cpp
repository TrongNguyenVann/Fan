#include <iostream>
#include "fan.h"


int main() {
  Fan my_fan = Fan();
  std::cout << "1." << my_fan;
  my_fan.StartFan(2);
  std::cout << "2." << my_fan;
  my_fan.ToogleMode();
  std::cout << "3." << my_fan;
  my_fan.SetLevel(3);
  std::cout << "4." << my_fan;
  my_fan.StopFan();
  std::cout << "5." << my_fan;
}