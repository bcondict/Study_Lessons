# Python Inheritance

## Concepts to Cover

- Introduction to Inheritance

  - What is Inheritance?
  - Benefits of Inheritance

- Types of Inheritance

  - Single Inheritance
  - Multiple Inheritance
  - Multilevel Inheritance
  - Hierarchical Inheritance

- Implementing Inheritance in Python

  - Base and Derived Classes
  - Overriding Methods

- Using the super() Function

  - Calling Parent Class Methods
  - Multiple Inheritance and super()

- Practical Examples and Exercises

  - Creating and Using Inherited Classes
  - Method Overriding and super()

## Origin and Story

Inheritance is a fundamental concept in OOP, enabling new classes to inherit properties and behaviors from existing classes.

Inheritance promotes code reuse, allowing developers to create new functionality based on existing code.

Python supports multiple forms of inheritance, allowing developers to create complex class hierarchies and achieve code reuse and organization.

## What is it, and How to Use it?

### What is it?

- What is Inheritance?

  Inheritance allows a class (derived class) to inherit attributes and methods from another class (base class). This promotes code reuse and logical hierarchy.

- Benefits of Inheritance:

  - Code Reuse: Allows new classes to reuse existing code.
  - Logical Hierarchy: Creates a clear and logical class structure.
  - Ease of Maintenance: Simplifies updates and maintenance by making it easier to manage related classes.

- Types of Inheritance
  - Single Inheritance: A class inherits from one base class.
  - Multiple Inheritance: A class inherits from a derived class, creating a chain of inheritance.
  - Multilevel Inheritance: Multiple classes inherit from the same base class.
  - Hierarchical Inheritance: Multiple classes inherit from the same base class.

### How to use it?

- Single Inheritance

  ```python
  class Animal:
      def eat(self):
          return "Eating"

  class Dog(Animal):
      def bark(self):
          return "Barking"
  ```

- Multiple Inheritance:

  ```python
  class Animal:
      def eat(self):
          return "Eating"

  class Pet:
      def play(self):
          return "Playing"

  class Dog(Animal, Pet):
      def bark(self):
          return "Barking"
  ```

- Multilevel Inheritance:

  ```python
  class Animal:
      def eat(self):
          return "Eating"

  class Mammal(Animal):
      def walk(self):
          return "Walking"

  class Dog(Mammal):
      def bark(self):
          return "Barking"
  ```

- Hierarchical Inheritance:

  ```python
  class Animal:
      def eat(self):
          return "Eating"

  class Dog(Animal):
      def bark(self):
          return "Barking"

  class Cat(Animal):
      def meow(self):
          return "Meowing"
  ```

### Implementing Inheritance in Python

- Base and Derived Classes:

  Base classes provide common attributes and methods that derived classes can inherit and override.

  ```python
  class Animal:
      def eat(self):
          return "Eating"

  class Dog(Animal):
      def bark(self):
          return "Barking"
  ```

- Overriding Methods:

  Derived classes can override methods from the base class.

  ```python
  class Animal:
      def make_sound(self):
          return "Some sound"

  class Dog(Animal):
      def make_sound(self):
          return "Bark"
  Using the super() Function
  ```

- Calling Parent Class Methods:

  The super() function allows calling methods from the parent class.

  ```python
  class Animal:
      def __init__(self, name):
          self.name = name

      def make_sound(self):
          return "Some sound"

  class Dog(Animal):
      def __init__(self, name, breed):
          super().__init__(name)
          self.breed = breed

      def make_sound(self):
          return "Bark"
  ```

- Multiple Inheritance and super():

  In multiple inheritance, super() helps resolve the method resolution order (MRO).

  ```python
  class Animal:
      def make_sound(self):
          return "Some sound"

  class Pet:
      def play(self):
          return "Playing"

  class Dog(Animal, Pet):
      def make_sound(self):
          return super().make_sound() + " and Bark"
  ```

## Practical Exercises

### Exercise 1:

1.  Objective:
    Create a base class `Vehicle` that receives the attribute `brand`, and has a method `start` that return the message `<brand> vehicle is starting.`

    Create a derived class `Car` that inherits from `Vehicle`, include the `drive` method that return `<brand> car is driving.`

    Instantiate the class `Car` and call the method of the class and print the result. 2. Exercise:

[inheritance.py](./inheritance.py)
