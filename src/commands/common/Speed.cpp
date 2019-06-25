#include "Speed.h"

#include <string>

Speed::Speed() : Command() {
    m_commandName = std::string("Speed Command");
    m_commandPID = std::string("01 0D");
}
