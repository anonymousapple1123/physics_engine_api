## How to compile files 



*The compiled files are in directory objectFiles*

>### Prerequisites of system
    - A g++ compiler or any c++ copmiler.
    
    
>### Steps
>    -Compile all the implementation file like 'Circle.cpp' with the following command.
>```g++ -c Circle.cpp```

>    -Link all the 'object' files through the linker with following command.

>```g++ -o executableName Circle.o main.o```


>### Quick Copy
*This is for debian operating systems and may not be up-to-date.*

```bash
g++ -c Circle.cpp
g++ -c RigidBody.cpp
g++ -c PhysicsEngine.cpp
g++ -c main.cpp
```

```bash
g++ -o engine  Circle.o RigidBody.o  PhysicsEngine.o main.o
```