
#ifndef CANOA_ABSTRACTCOMMANDDISPATCHER_H
#define CANOA_ABSTRACTCOMMANDDISPATCHER_H

#include "Dispatcher.h"

template<typename T>
class AbstractCommandDispatcher {
public:
    AbstractCommandDispatcher() = delete;
    AbstractCommandDispatcher(AbstractCommandDispatcher const&) = delete;
    AbstractCommandDispatcher&operator=(AbstractCommandDispatcher const&) = delete;
    virtual ~AbstractCommandDispatcher();

    static void dispatch<T>();
};


#endif //CANOA_ABSTRACTCOMMANDDISPATCHER_H
