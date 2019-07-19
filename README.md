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

## Git Strategy
#### Commit messages
All the commit messages should use the imperative mood in description, first you should use a single line commit
if necessary you can explain the commit's motivation always using the `what` and `why`.

##### Message structure
The commit message consists of the three distinct parts separated by a blank line: the title,
an optional body and the author's signature. It looks like below:
```
    [TagName]: Short description

    Body of explanation, explaning the motivation use the rule `what` and `why`,
    not the how.

    <Author-Signature>
```

The TagName should follow the pattern listed below:

```
[Buildsystem]: Used to build config files like cmake, configure, autotools
[Infra]: Used to designate update configs, no production code change
[Feat]: Used to designate a new Feature
[Fix]: A bug fix
[Refactor]: User to designate a production code refactoring
[Tests]: Add tests, refactoring tests, no production code changes
```

## Finally
Enjoy the project!