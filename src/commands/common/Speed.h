
#ifndef CANOA_SPEED_H
#define CANOA_SPEED_H

#include "Command.h"

class Speed: public Command {
public:
    Speed();

    virtual ~Speed() override = default;
};

#endif //CANOA_SPEED_H
