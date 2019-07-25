#include "SpeedCommandDispatcher.h"
#include "CommandFactory.h"
#include "Speed.h"

#include <iostream>

void SpeedCommandDispatcher::dispatch() {
    auto speedCmd = CommandFactory::makeCommand<Speed>();
    std::cout << "> command: " << speedCmd->commandName() << std::endl;
}
