
#ifndef CANOA_SPEEDCOMMANDDISPATCHER_H
#define CANOA_SPEEDCOMMANDDISPATCHER_H

#include "Dispatcher.h"

class SpeedCommandDispatcher: public Dispatcher {
public:
    SpeedCommandDispatcher() = default;
    virtual ~SpeedCommandDispatcher() override;

    void dispatch() final;
};


#endif //CANOA_SPEEDCOMMANDDISPATCHER_H
