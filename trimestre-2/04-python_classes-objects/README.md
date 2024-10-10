# Python Classes and Objects

## Concepts to cover

- Introduction to Object-Oriented Programming (OOP)
  - What's OOP?
  - Four pillars of OOP
- Understanding Classes and Objects
  - Definitions and Differences
  - Creating a Class
  - Instantiating Objects
- Attributes and Method
  - Instance Attributes and Methods
  - Class Attributes and Method
- Encapsulation, Inheritance, and Polymorphism.
  - Encapsulation: Private and Public Members
  - Inheritance: Base and Derived Classes
  - Polymorphism: Method Overriding and Overloading
- Practical Examples and Exercises
  - Creating and Using Classes and Objects
  - Implementing OOP Concepts in Python

## Origin and Story

OOP was developed to address the limitations of procedural programming. It models software around objects rather than actions.

OOP enhances code modularity, reusability, and maintainability. It allows for more natural mapping of real-world problems to code.

## What is it and how to use it?

### What is it?

OOP is a programming paradigm that uses objects and classes to structure software in a way that is modular and reusable.

**Four Pillars of OOP:**

1. Encapsulation: Bundling data and methods that operate on the data within one unit (class)
2. Abstraction: Hiding complex implementation details and showing only the necessary features.
3. Inheritance: Deriving new classes from existing ones, promoting code reuse.
4. Polymorphism: Allowing methods to do different things based on the object it is acting upon.

**Understanding Classes and Objects**

- Class: A blueprint for creating objects. It defines a set of attributes and methods.
- Object: An instance of a class. It represents a specific example of the class.

### How to use it?

#### Classes and Objects

- **Creating a Class:**
  Take into account that `__init__` method is where the program goes when instantiate an object, that define the object itself.

  Also take into account that every method inside the class have to receive the `self` attribute which means the particular object that's being created.

  Syntax:

  ```python
  class MyClass:
    class_attribute = "hola"
    def __init__(self, attribute1, attribute2):
      self.attribute1 = attribute1
      self.attribute2 = attribute2

    def method1(self):
      return self.attribute1

    def method2(self):
      return self.attribute2
  ```

- Instantiating Objects:
  Syntax:
  ```python
  myObject = MyClass(attribute1_value, attribute2_value)
  ```

#### Attributes and Methods

- Instance Attributes and Method:

  - Instance Attributes: Defined withing the `__init__` method and unique to each instance.
    ```python
    def __init__(self, name):
      self.name = name
    ```
  - Instance Methods: Operate on instance attributes.
    ```python
    def greet(self):
      return f"Hello, {self.name}"
    ```

- Class Attributes and Methods:

  - Class Attributes: Shared across all instances of the class.

    ```python
    Class MyClass:
      class_attribute = "I am a class attribute"
    ```

  - Class Methods: Operate on class attributes
    ```python
    @classmethod
    def class_method(cls):
      return cls.class_attribute
    ```

#### Encapsulation, Inheritance, and Polymorphism

- **Encapsulation:**
  - Public Members: Accessible from outside the class.
  - Private Members: Prefixed with `__` and not accessible from outside the class.
    ```python
    class Woman:
      def __init__(self, name, age):
        self.name = name # Public attribute
        self.__age = age
    ```
- **Inheritance:**

  - **Base and Derived Classes:** Derived classes inherit attributes and methods from the base class.

    ```python
    class BaseClass:
      def base_method(self):
        return "Base Method"

    class DerivedClass(BaseClass):
      def derived_method(self):
        return "derived_method"

    derivedClass = DerivedClass()
    derivedClass.derived_method()
    derivedClass.base_method() # accessible as is inherit class
    ```

- Polymorphism:

  - Method Overriding: Redefining a method in a derived class.

    ```python
    class Animal:
      def sound(self):
        return "Some sound"

    class Dog(Animal):
      def sound(self):
        return "Bark"

    animal = Animal()
    animal.sound()
    dog = Dog()
    dog.sound()
    ```

## Practical Examples and Exercises

### Exercise 1

1. Objective:
   Create a base class `Animal` that receives the name of the dog and age.
   - `Name`: is the name of the dog, that's a public attribute
   - `Age`: is the age of the dog, and is a public attribute
     Create a derived class `Dog` that receive the name of the dog, ace and the name of the owner.
   - `OwnerName`: is the name of the owner, and has to be a private attribute
2. Exercise:
   Found on [`animals.py`](animals.py)
