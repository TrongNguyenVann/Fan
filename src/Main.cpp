#include <iostream>
#include "fan.h"


int main() {
  Fan my_fan = Fan("Dien Co VN", 90);
  my_fan.WelcomeFan();
  std::cout << "1." << my_fan;

  // Start the fan with level 2
  my_fan.StartFan(2);
  std::cout << "2." << my_fan;

  // Reverse the mode of fan from motionless to spinning or vice versa
  my_fan.ToogleMode();
  std::cout << "3." << my_fan;

  // Set level of fan to 3
  my_fan.SetLevel(3);
  std::cout << "4." << my_fan;

  // Stop the fan
  my_fan.StopFan();
  std::cout << "5." << my_fan;
  return 0;
}
