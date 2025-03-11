# Python - Everything is an Object

## Concepts to Cover
- What is an object?
- Difference between a class and an object (or instance)
- Mutable vs Immutable objects
- What is a reference?
- What is an assignment?
- What is an alias?
- Checking if two variables are identical
- Checking if two variables are linked to the same object
- Displaying a variable's identifier (memory address in CPython)
- Built-in mutable types
- Built-in immutable types
- How Python passes variables to functions

## Origin and Story

Python was designed with an object-oriented approach from the beginning. Everything in Python, including numbers, strings, functions, and even modules, is an object. The language was built to provide a simple yet powerful way of structuring code using objects and classes.

## What is it, and How to Use it?
### What is an Object?
An object in Python is an instance of a data structure that contains:

  - Identity (unique identifier, given by id(obj))
  - Type (determined by type(obj))
  - Value (the data stored inside the object)

  Example:

  ```python
  x = 10
  print(id(x))  # Identity
  print(type(x))  # Type
  print(x)  # Value
  ```

### Class vs Object (or Instance)
A class is a blueprint for creating objects, while an object (or instance) is a specific realization of a class.

  Example:

```python
  class Car:
      def __init__(self, brand, color):
          self.brand = brand
          self.color = color

  # Creating objects (instances)
  car1 = Car("Toyota", "Red")
  car2 = Car("Honda", "Blue")

  print(car1.brand)  # Toyota
  print(car2.color)  # Blue
  Car is a class (blueprint).
  car1 and car2 are objects (instances of Car).
  ```

### Mutable vs Immutable Objects
- Mutable objects: Can be modified after creation.
- Immutable objects: Cannot be changed after creation.
  Example:

  ```python
  # Immutable (numbers, strings, tuples)
  x = 10
  x = x + 5  # New object is created, old one is discarded

  # Mutable (lists, dictionaries, sets)
  lst = [1, 2, 3]
  lst.append(4)  # The same object is modified
  ```

### What is a Reference?
A reference is a variable that points to an object’s memory location.

  Example:

  ```python
  a = [1, 2, 3]  # 'a' refers to a list object in memory
  b = a  # 'b' now refers to the same object
  ```

### What is an Assignment?
An assignment creates a reference to an object, not a copy.

  Example:

  ```python
  x = [1, 2, 3]  # 'x' points to a list object
  y = x  # 'y' now also points to the same list
  ```
Both x and y reference the same object.

### What is an Alias?
An alias is another variable that refers to the same object.

  Example:

  ```python
  a = [1, 2, 3]
  b = a  # 'b' is an alias for 'a'
  b.append(4)
  print(a)  # [1, 2, 3, 4] (because 'a' and 'b' refer to the same object)
  ```

### Checking If Two Variables Are Identical
Use is to check if two variables refer to the same object.

  Example:

  ```python
  a = [1, 2, 3]
  b = a
  c = [1, 2, 3]

  print(a is b)  # True (same object)
  print(a is c)  # False (different objects with same values)
  ```

### Checking If Two Variables Are Linked to the Same Object
Use id() to check the memory address.

  Example:

  ```python
  Copiar
  Editar
  x = [10, 20, 30]
  y = x

  print(id(x))  # Memory address of 'x'
  print(id(y))  # Same as 'x' because they reference the same object
  ```

### Displaying the Variable Identifier (Memory Address)
Use id() to get the memory address.

  Example:

  ```python
  a = 42
  print(id(a))  # Unique identifier (memory address in CPython)
  ```

### Built-in Mutable Types
- Lists (`list`)
- Dictionaries (`dict`)
- Sets (`set`)
- Byte Arrays (`bytearray`)
  Example:

  ```python
  my_list = [1, 2, 3]
  my_list.append(4)  # Mutating the object
  ```
### Built-in Immutable Types
- Integers (`int`)
- Floats (`float`)
- Strings (`str`)
- Tuples (`tuple`)
- Booleans (`bool`)
- Bytes (`bytes`)
- Example:

  ```python
  x = "hello"
  x += " world"  # A new string is created, the old one is discarded
  ```

### How Does Python Pass Variables to Functions?
Python uses pass-by-object-reference, meaning:

- If the object is **mutable**, changes inside the function affect the original.
- If the object is **immutable**, changes inside the function do not affect the original.
  Example:

  ```python
  # Immutable object (int)
  def modify_value(x):
      x = x + 1  # New object is created

  num = 10
  modify_value(num)
  print(num)  # 10 (unchanged)

  # Mutable object (list)
  def modify_list(lst):
      lst.append(4)  # Modifying the original object

  my_list = [1, 2, 3]
  modify_list(my_list)
  print(my_list)  # [1, 2, 3, 4] (changed)
  ```
