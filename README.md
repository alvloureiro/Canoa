# Canoa Library
Library to request information from a vehicle using obd2 pids

## Introduction
In canoa library we call pids as Commands, so for convenience we separated the
OBD2 PIDs in Commands related to:
* Control
* Engine
* Fuel
* Pressure
* Protocol
* Temperature

## Technology Stack
Below the list of technologies used in this project.
* C++17 - as programming language
* Qt >= 5.12 - as main framework
* CMake >= 3.10 - as buildsystem

## How to build

To properly build we recommend that you have the QT_HOME_PATH environment variable setted up
on your machine. After this step you just type the line below on your preferred terminal.
```bash
$ rm -rf build && mkdir build && cd build && cmake -DCMAKE_BUILD_TYPE=Debug ..
$ make -j4

```

The command line above will build the Canoa library on Debug mode and if you want
to install just type:

```bash
$ make install
```

It will install the library headers and the shared object under your root project
directory inside a directory called `output`.

The final directory tree building on debug mode would be:
```bash
Canoa
├── output
    ├── include
    │   └── Canoa
    │       ├── Command.h
    │       ├── MassAirFlow.h
    │       ├── Rpm.h
    │       └── Speed.h
    └── lib
        └── libCanoa.so
```