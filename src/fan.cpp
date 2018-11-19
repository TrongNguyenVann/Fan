#include "fan.h"

// The fan when it just be bought is off, level 0 and at 
Fan::Fan() : 
  m_status(Status::OFF),
  m_level(0),
  m_mode(Mode::MOTIONLESS) {}

void Fan::StartFan(int level) {
  if (level != 0) {
    m_status = Status::ON;
    m_level = level;
  }
}

void Fan::StopFan() {
  m_status = Status::OFF;
  m_level = 0;
  m_mode = Mode::MOTIONLESS;
}

void Fan::ToogleMode() {
  if (m_mode == Mode::MOTIONLESS) {
    m_mode = Mode::SPINNING;
  }
  else {
    m_mode = Mode::MOTIONLESS;
  }
}

std::ostream& operator<<(std::ostream& out, const Fan& fan) {
  if (fan.m_status == Status::ON) {
    out << "ON --- ";
  }
  else {
    out << "OFF --- ";
  }
  out << "Current Level: " << fan.m_level;
  out << " --- Mode: ";
    if (fan.m_mode == Mode::SPINNING) {
    out << "SPINNING \n";
  }
  else {
    out << "MOTIONLESS \n";
  }
  return out;
}