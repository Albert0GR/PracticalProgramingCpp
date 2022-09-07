## Operating System and Software Versions
Operating System: – Ubuntu 18.04 Bionic Beaver

Conventions

- "#" : requires given linux commands to be executed with root privileges either directly as a root user or by use of sudo command

- "$" : requires given linux commands to be executed as a regular non-privileged user

## Install GCC

The following linux command will install gcc compiler on on Ubuntu 18.04 Bionic Beaver. Open up terminal and enter:

> $ sudo apt install g++

## Install build-essential

Another way to install **g++** compiler is to install it as part of **build-essential** package. Additionally the **build-essential** package will also install additional libraries as well as **gcc** compiler. In most cases or if unsure this is exactly what you need:

> $ sudo apt install build-essential

## Check G++ version

> $ g++ --version

> g++ (Ubuntu 7.2.0-18ubuntu2) 7.2.0
Copyright (C) 2017 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

# Compile a simple C++ “Hello World” code:

```c++
#include <iostream>
using namespace std;

int main() 
{
    cout << "Hello, World!";
    return 0;
}

```

> $ ``` g++ -o hello hello.cc ```
>
> $ ./hello 

 >> Hello, World!


