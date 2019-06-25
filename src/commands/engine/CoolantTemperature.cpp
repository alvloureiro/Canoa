#include "CoolantTemperature.h"

 CoolantTemperature::CoolantTemperature() : Command() {
    m_commandName = QString("Coolant Temperature Command");
    m_commandPID = QString("01 05");
}
