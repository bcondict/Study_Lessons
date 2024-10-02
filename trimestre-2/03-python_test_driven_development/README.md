# Python Test Driven Development (TDD)

## Concepts to cover

- Introduction to Test-Driven Development (TDD)
  - What is TDD?
  - Benefits of TDD
- Writing Test Before Code
  - The Red-Green-Refactor cycle
  - Creating a Test Plan
- Using `doctest` for TDD
  - Introduction to the `doctest` module
  - Writing and Running Doctests
  - Integrating Doctests with Documentation
- Using `unittest` for TDD
  - Introduction to the `unittest` module
  - Writing and Running Unit Test
  - Test Fixtures, Assertions, and Test Suites
- Practical Examples and Exercises
  - Writing Unit Test and Doctests
  - Refactoring Code based on the Test Results

## Origin and Story

TDD is a software development process that emphasizes writing tests before writing the actual code. It was popularized by Kent Beck as part of Extreme Programming (XP).

TDD ensures that code is tested from the outset, leading to fewer bugs, more maintainable code, and a clear specification of what the code is supposed to do.

## What is it, and how to use?

### What is it?

- Python Testing Frameworks:

  - `unittest`:
    - Modeled after Java's JUnit, `unittest` is a built-in Python module that provides a robust framework for writing and running test.
  - `doctest`:
    - `doctest` allows you to write test embedded in docstrings. These test serve both as documentation and test cases.

- What is TDD?

  - Is a software development approach where test are written before the code. The development cycle involves writing a test running it to see it fail, writing code to pass the test, and then refactoring the code.

- Benefits of TDD

  - **Improves Code Quality**: Ensures that code meets requirements and catches bugs early
  - **Enhances Maintainability**: Tests act as documentation, making it easier to understand and modify the code.
  - **Increases Confidence**: Developers can make changes without fear of breaking existing functionality.

- Writing test Before Code

  - The Red-Green-Refactor cycle:

    1. Red: Write a test for a new functionality. Run it to ensure it fails (since the functionality is not yet implemented).
    2. Green: Write the minimum code necessary to make the test pass.
    3. Refactor: Refactor the code to improve its structure while ensuring that all test still pass.

  - Creating a Test Plan

    - Identify the functionalities to be tested.
    - Write test cases for each functionality.
    - Ensure that test cover edge cases and potential errors.

### How to use it?

#### Using `Doctest`

- Syntax:

  ```python
  def my_function(a, b):
    """
      Adds two numbers.

      >>> my_function(2, 3)
      5
    """
    return a + b

  if __name__ == "__main__":
    import doctest
    doctest.testmod()
  ```

#### Using `Unittest`

- Syntax:

  ```python
  import unittest

  class TestMyFunction(unittest.TestCase):
    def test_case1(self):
      self.assertEqual(my_function(2, 3), 5)

  if __name__ == "__main__":
    unittest.main()
  ```

- Test Fixtures:
  Setup and teardown code that runs before and after test.

  ```python
  class TestMyFunction(unittest.TestCase):
    def setUp(self):
      # Code to set up test environment

    def test_case1(self):
      self.assertEqual(my_function(2, 3), 5)

    def tearDown(self):
      # Code to clean up after test
  ```

- Assertions:
  Methods to check for specific conditions.
  ```python
  self.assertTrue(condition)
  self.assertEqual(a, b)
  ```
- Test Suites:
  Group multiple test cases.
  ```python
  suite = unittest.TestSuite()
  suite.addTest(TestMyFunction("test_case1"))
  ```

## Practical Examples and Exercises

### Exercise 1: Writing Unit Test

1. Objective:
   Write unit test for a simple function add function.

2. Exercise:
   found on [`add.py`](./add.py) and [`add.test.py`](./add.test.py)

### Exercise 2.: writing Doctest

1. Objective:
   Write doctest for a simple function multiply function
2. Exercise:
   found on [`multiply.py`](./multiply.py) and [`multiply.doctest.txt`](./multiply.doctest.txt)
