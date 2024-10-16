# Python Abstract classes and Interfaces

## Topics to review

- Introduction to Abstract Classes and Interfaces

  - What are Abstract Classes?
  - What are Interfaces?

- The Need for Abstraction

  - Benefits of Abstraction
  - Use Cases

- Implementing Abstract Classes in Python

  - Using the `abc` Module
  - Abstract Methods

- Creating Interfaces in Python

  - Defining Interfaces with Abstract Base Classes (ABCs)

- Practical Examples and Exercises

  - Implementing Abstract Classes and Methods
  - Creating and Using Interfaces

## Origin and Story

Abstract classes and interfaces originated from the need to create a blueprint for other classes. They define methods that must be created within any child classes built from the abstract class.

Abstraction allows for the definition of methods that must be implemented in subclasses, ensuring a consistent interface across multiple implementations.

Python uses the abc module to support abstract base classes and interfaces. This module allows developers to define abstract classes that can’t be instantiated directly.

## What is it and how to use it?

### What is it?

- **What are Abstract Classes**:
  Abstract classes cannot be instantiated directly. They are meant to be subclasses, and the can include abstract methods that must be implemented by subclasses.

- **What are Interfaces**:
  Interfaces are a what to define methods that must be implemented by any class that implements the interface. In python, interfaces can be created using abstract base classes.

- **The Need for Abstraction**

  - **Benefits of Abstraction:**

    - **Encourages Code Reuse:** Abstract classes provide a common base class that multiple - subclasses can inherit from.
      Enforces Consistency: Ensures that all subclasses implement the necessary methods.
    - **Simplifies Maintenance:** Makes it easier to update the code since changes in the abstract class can propagate to all subclasses.

  - **Use Cases:**

    - **Design Patterns:** Abstract classes and interfaces are fundamental in many design patterns.
    - **API Design:** They help in defining clear and consistent APIs.

### How to use it?

- Implementing abstract classes
  Abstract methods are defined in the abstract base class ad must be overridden in derived classes.

  Using the `abc` Module:

  ```python
  from abc import ABC, abstractmethod

  class Animal(ABC):
    @abstractmethod
    def make_sound(self):
      pass
  ```

- Creating interfaces
  In python, interfaces can be created using abstract base classes by defining methods that must be implemented in subclasses.

## Practical Examples and Exercises

### Exercise 1:

1. Objective:
   Create an abstract class and implement it in a subclass.

   Create a class `Animal` that's a base class that implements `ABC` interface from `abc` module. Then create two subclasses `Dog` and `Cat` that inherit from `Animal` and define the abstract method `make_sound`

2. Solution:
   [abstractClass.py](./abstractClass.py)
