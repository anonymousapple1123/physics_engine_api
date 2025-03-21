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
g++ -Iinclude -c .\src\RigidBody.cpp -o objectFiles/RigidBody.o
g++ -Iinclude -c .\src\Vector2.cpp -o objectFiles/Vector2.o
g++ -Iinclude -c .\src\PhysicsEngine.cpp -o objectFiles/PhysicsEngine.o
g++ -Iinclude -c main.cpp -o objectFiles/main.o
```

```bash
g++ -Iinclude -o engine  objectFiles/Vector2.o objectFiles/RigidBody.o  objectFiles/PhysicsEngine.o objectFiles/main.o
```