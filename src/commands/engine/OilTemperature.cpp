#include "OilTemperature.h"

#include <QString>

OilTemperature::OilTemperature() :Command() {
    m_commandName = QString("Oil Temperature");
    m_commandPID = QString("01 5C");
}
