#include "Rpm.h"

#include <string>

Rpm::Rpm() : Command() {
    m_commandName = std::string("RPM Command");
    m_commandPID = std::string("01 0C");
}