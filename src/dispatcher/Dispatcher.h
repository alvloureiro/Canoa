
#ifndef CANOA_DISPATCHER_H
#define CANOA_DISPATCHER_H

class Dispatcher {
public:

    Dispatcher(Dispatcher const&) = delete;
    Dispatcher&operator=(Dispatcher const&) = delete;

    virtual ~Dispatcher();

    virtual void dispatch() = 0;

protected:
    Dispatcher() = default;
};

#endif //CANOA_DISPATCHER_H
