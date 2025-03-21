🟢 Essential Concepts (Core Knowledge You Must Have)
These are non-negotiable. You need to be solid on these before starting.

1. C++ Programming Fundamentals
    Classes & Objects (OOP principles)
    Constructors/Destructors
    Encapsulation, Abstraction
    Pointers and References
    Dynamic Memory Management (new, delete)
    Const-correctness and Access Specifiers (public, private)
    Header Files and Source Files (.h and .cpp separation)
    Compilation Process & Linking
    
2. Basic Mathematics (Linear Algebra & Physics)
    Vectors (2D / 3D)
    Vector addition, subtraction, scalar multiplication
    Dot product (for projections and angles)
    Cross product (in 3D, for rotations and torque)
    Magnitude and normalization
    Newtonian Mechanics
    Newton's Laws (especially F = ma)
    Velocity, Acceleration, and Position updates (kinematics)
    Euler Integration
    Basic numerical integration to update position and velocity
    Gravity and Force Application

3. Software Design Principles
    Modular Design
    Split components into reusable modules (e.g., Vector, RigidBody, Engine)
    Separation of Concerns
    Physics logic separated from rendering, input, etc.
    Data Structures
    Arrays (or std::vector) to hold and manage objects (bodies)

4. Development Workflow & Build Systems
    Compiling C++ Programs
    Use g++ or clang++ for simple programs
    Or CMake/Makefile for larger projects
    Folder Organization and File Structuring
    Group related files (e.g., physics/, math/)
    Use namespaces if necessary to avoid name conflicts
    Debugging
    Use gdb or an IDE debugger to trace and fix bugs
    Logging for state monitoring (e.g., positions/velocities in each simulation step)


🟡 Advanced Concepts (When Expanding the Engine)

Once you have the basics down, you'll want to explore these topics to make your physics engine more sophisticated and efficient.

5. Advanced Integration Methods
    Semi-Implicit (Symplectic) Euler
    Runge-Kutta (RK4) for more precise integration
    Fixed Time Step vs Variable Time Step
    How to decouple physics simulation from rendering frame rate

6. Collision Detection
    Broad-phase Collision Detection
    Axis-Aligned Bounding Boxes (AABB)
    Spatial Partitioning (Quadtrees, Grids)
    Narrow-phase Collision Detection
    Circle vs Circle, AABB vs AABB
    Separating Axis Theorem (SAT) for convex polygons
    Distance checks for spheres and capsules

7. Collision Response
    Impulse-based Resolution
    Normal and Tangential Impulses
    Coefficient of Restitution (bounciness)
    Friction handling in contacts
    Penetration Resolution
    Position correction to prevent sinking
    Contact Points and Manifolds
    Handling multiple contact points in one collision

8. Rotational Dynamics (2D and 3D)
    Angular Velocity and Acceleration
    Torque Application
    Moment of Inertia
    Orientation and Rotation
    Rotation Matrices (2D/3D)
    Quaternions (for 3D)

9. Constraints and Joints
    Distance Constraints
    Pin/Hinge Joints
    Slider/Prismatic Joints
    Constraint Solvers
    Iterative Solvers (Gauss-Seidel, Sequential Impulse)
    🔵 Optional / Bonus Concepts (For Full-Fledged Engines)
    If you want to make something production-grade or game-ready, these concepts become relevant.

10. Optimization Techniques
    Spatial Partitioning (BVH, Octrees)
    Sleeping & Waking Bodies
    To avoid simulating resting objects unnecessarily
    Parallel Processing (Multithreading)
    Job systems for collision detection, constraint solving
