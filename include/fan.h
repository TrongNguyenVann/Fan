#ifndef FAN_H
#define FAN_H

#include <iostream>
#include <string>
/**
 * Fan class to simulate the real fan in my room
 * It has status: on/ off
 * Level: 0, 1, 2, 3
 * Mode: motionless / spinning
 */

// Enum about status of fan
enum class Status {
  ON = 0,
  OFF = 1
};

// Enum about mode of fan
enum class Mode {
  MOTIONLESS,
  SPINNING
};

class Fan {
private:
  Status m_status;
  int m_level;
  Mode m_mode;

  // Brand of the fan
  std::string m_brand;

  // The power of the fan
  int m_power;

public:
  // Fan constructor
  Fan(std::string brand = "unknown", int power = 0);

  // Get status
  inline Status GetStatus() {
    return m_status;
  }

  // Set status
  inline void SetStatus(Status status) {
    m_status = status;
  }

  // Get level
  inline int GetLevel() {
    return m_level;
  }

  // Set level
  inline void SetLevel(int level) {
    m_level = level;
  }

  // Get mode
  inline Mode GetMode() {
    return m_mode;
  }

  // Set mode
  inline void SetMode(Mode mode) {
    m_mode = mode;
  }

  // Get brand of fan
  inline std::string GetBrand() {
    return m_brand;
  }

  // Set brand
  inline void SetBrand(std::string brand) {
    m_brand = brand;
  }

  // Get power of fan
  inline int GetPower() {
    return m_power;
  }

  // Set mode
  inline void SetPower(int power) {
    m_power = power;
  }

  // Start the fan
  void StartFan(int level);

  // Stop the fan
  void StopFan();

  // Change the mode off fan
  void ToogleMode();

  void WelcomeFan();

  // Cout a fan
  friend std::ostream& operator<<(std::ostream& out, const Fan& fan);

};
#endif
