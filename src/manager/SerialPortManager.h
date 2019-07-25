
#ifndef CANOA_SERIALPORTMANAGER_H
#define CANOA_SERIALPORTMANAGER_H

#include "libserial/SerialPort.h"

#include <memory>

class SerialPortManager {
public:
    SerialPortManager() = delete;
    SerialPortManager(SerialPortManager const&) = delete;
    SerialPortManager&operator=(SerialPortManager const&) = delete;

    ~SerialPortManager() = default;

    static std::unique_ptr<LibSerial::SerialPort> instance();

private:
    static inline std::string const serialPort_1_ = "/dev/ttyUSB0";
    static inline std::string const serialPort_2_ = "/dev/ttyUSB1";

};


#endif //CANOA_SERIALPORTMANAGER_H
