
#ifndef CANOA_OILTEMPERATURE_H
#define CANOA_OILTEMPERATURE_H

#include "Command.h"

class OilTemperature: public Command {
public:
    OilTemperature();
    virtual ~OilTemperature() = default;
};


#endif //CANOA_OILTEMPERATURE_H
