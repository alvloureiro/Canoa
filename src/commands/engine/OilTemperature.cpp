#include "OilTemperature.h"

#include <string>

OilTemperature::OilTemperature() :Command() {
    m_commandName = std::string("Oil Temperature");
    m_commandPID = std::string("01 5C");
}
