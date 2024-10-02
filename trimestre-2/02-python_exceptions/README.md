# Python Exceptions

## Concepts to cover

- Introduction to Python Exception
  - What are Exceptions?
  - Importance of handling Exception
- Understanding the Exception Hierarchy
  - Built-in Exceptions
  - Custom Exceptions
- Basic Exception Handling
  - The `try` and `except` blocks
  - The `else` block
  - The `finally` block
- Raising Exceptions
  - Using the `raise` statement
  - Custom Exception Classes
- Practical Examples and Exercises
  - Handling common Exceptions
  - Creating the Raising Custom Exceptions

## Origin and Story

Exceptions were introduced in Python to handle errors gracefully. They provide a way to interrupt the normal flow of a program and transfer control to error-handling code.

They allow developers to handle error conditions systematically, improving program robustness and user experience.

## What is it, and how to use it?

### What Are Exceptions

Exceptions are events that can alter the normal flow of a program. They indicate that something unexpected has happened.

Proper Exception handling ensures that a program can handle error gracefully without crashing.

#### **Exception Hierarchy**

- **Built-in Exception**
  Python provides many built-in Exceptions like

  - `ZeroDivisionError`,
  - `IndexError`,
  - `KeyError`
  - `ValueError`
  - `SystemError`
  - `SystemExit`

- **Custom Exceptions**
  - Developers can create their own exceptions by inheriting from the base `Exception` class. More on the [how to use it section]("#how to use it")

### How to use it

#### **Basic Exception Handling**

- The `try` and `catch` blocks:
  - Use `try` to wrap code that might raise an exception and `except` to handle the exception.
    - You can use it to catch one specific exception by passing the exception:
      ```python
        try:
          result = 10 / 0
        except ZeroDivisionError:
          print("Cannot divide by Zero")
      ```
    - Or any exception leaving it empty:
      ```python
        try:
          result = 10 / 0
        except:
          print("Cannot divide by Zero")
      ```
- The `else` block:
  - Code in the `else` block runs if no exceptions are raised in the `try` block.
    ```python
    try:
      result = 10 / 2
    except ZeroDivisionError:
      print("Cannot divide by Zero")
    else:
      print("Division succesful: ", result)
    ```
- The `finally` block:
  - Code in the `finally` block runs no matter what, often used for cleanup actions.
    ```python
    try:
      file = open("example.txt", "r")
      print("File found")
    except FileNotFoundError:
      print("File not found")
    finally:
      file.close()
    ```

#### Raising Exceptions

- Using the `raise` statement:
  - Use `raise` to throw an exception manually.
    - You can raise a specific exception by using the exception:
      ```python
      def check_positive(number):
        if number < 0:
          raise ValueError("Number must be positive")
      ```
    - Or using just `Exception`:
      ```python
      def check_positive(number):
        if number < 0:
          raise Exception("Number must be positive")
      ```
- Custom Exception Classes:

  - Create a custom exception by subclassing `Exception`.

    ```python
    class CustomError(Exception):
      # Logic of custom error here
      pass

    def do_something():
      raise CustomError("Something went wrong")
    ```

## Practical Examples and Exercises

### **Exercise 1: Handling Common Exceptions**

1. Objective:
   Handle common exceptions like `ZeroDivisionError` and `ValueError`.

   Ask for the user to input an number and divide 100 over this number, throw an exception if error like division by zero or user do not input a number

2. Exercise:
   Found on [`handling_common_exceptions.py`](./handling_common_exceptions.py)

### **Exercise 2: Creating Custom Exceptions**

1. Objective:
   Create a custom exception and raise it under specific conditions.

   Create an exception that do not need to pass any message but when the exception is created use the `init` function to pass a message over the negative numbers

2. Exercise:
   Found on [`raising_exceptions.py`](./raising_exceptions.py)
