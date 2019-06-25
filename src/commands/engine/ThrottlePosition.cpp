#include "ThrottlePosition.h"

#include <string>

ThrottlePosition::ThrottlePosition() : Command() {
    m_commandName = std::string("Throttle Position command");
    m_commandPID = std::string("01 11");
}
