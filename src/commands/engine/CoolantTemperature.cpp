#include "CoolantTemperature.h"

#include <string>

 CoolantTemperature::CoolantTemperature() : Command() {
    m_commandName = std::string("Coolant Temperature Command");
    m_commandPID = std::string("01 05");
}
