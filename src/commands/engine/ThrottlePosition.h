
#ifndef CANOA_THROTTLEPOSITION_H
#define CANOA_THROTTLEPOSITION_H

#include "Command.h"

class ThrottlePosition: public Command {
public:
    ThrottlePosition();
    virtual ~ThrottlePosition() = default;
};


#endif //CANOA_THROTTLEPOSITION_H
