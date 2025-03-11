# Python - Variable Annotations

## Concepts to Cover
- What are variable annotations?
- Why use type annotations in Python?
- Basic syntax of variable annotations
- Using annotations with functions
- Type hinting with collections
- Type hinting with optional and union types
- Type hinting with callable functions
- Using Any, Final, and Literal
- Type aliases
- Practical benefits of variable annotations
- Best practices

## Origin and Story
Introduction to Type Annotations in Python
Python is a dynamically typed language, meaning that variables can hold values of any type without explicitly declaring their type. However, as projects grow, it becomes difficult to track the expected data types of variables and function parameters.

To improve code readability, maintainability, and error detection, Python 3.5 introduced type hints, and Python 3.6 added variable annotations as part of PEP 526.

While Python does not enforce type hints at runtime, they provide valuable documentation and enable static type checkers like mypy to detect type mismatches.

## What is it, and How to Use It?
### What are Variable Annotations?
Variable annotations allow developers to specify the expected data type of variables. However, these annotations do not enforce types at runtime; they simply serve as documentation and help with static type checking.

### Why Use Type Annotations?
✅ Improves code readability and documentation
✅ Helps IDEs provide better auto-completion and error detection
✅ Detects type errors early using static type checkers (`mypy`)
✅ Enhances maintainability in large projects

### Basic Syntax of Variable Annotations
The syntax for variable annotations is:

```python
variable_name: data_type = value
```

  Example:

  ```python
  age: int = 25
  name: str = "Alice"
  height: float = 5.7
  is_student: bool = True
  ```
**Note**: Annotations do not affect how Python runs the program.
For example, this is valid Python:

```python
age: int = "twenty-five"  # No runtime error, but mypy will flag it as incorrect
```

### Using Annotations with Functions
Annotations can be used for function arguments and return types:

```python
def add(x: int, y: int) -> int:
    return x + y

print(add(3, 5))  # 8
```
Here:

- `x: int` and `y: int` specify that `x` and `y` should be integers.
- `-> int` means the function returns an integer.

### Type Hinting with Collections
For lists, tuples, dictionaries, and sets, use `list`, `tuple`, `dict`, set with type hints:

```python
from typing import List, Dict, Tuple, Set

numbers: List[int] = [1, 2, 3, 4]
person: Dict[str, int] = {"Alice": 25, "Bob": 30}
coordinates: Tuple[float, float] = (12.5, 45.8)
unique_numbers: Set[int] = {1, 2, 3}
```

### Type Hinting with Optional and Union Types
- Use `Optional` when a variable can have `None`:

  ```python
  from typing import Optional

  age: Optional[int] = None  # Can be an int or None
  ```
- Use Union when a variable can be multiple types:

  ```python
  from typing import Union

  value: Union[int, float] = 10  # Can be an int or a float
  ```
### Type Hinting with Callable Functions
To annotate a function that takes a function as an argument, use `Callable`:

```python
from typing import Callable

def apply_function(func: Callable[[int, int], int], x: int, y: int) -> int:
    return func(x, y)

def multiply(a: int, b: int) -> int:
    return a * b

print(apply_function(multiply, 2, 3))  # 6
```
Here, `Callable[[int, int], int]` means `func` takes two `int` arguments and returns an `int`.

### Using `Any`, `Final`, and `Literal`
- `Any`: Can hold any type of value.
  ```python
  from typing import Any

  data: Any = "Hello"
  data = 10  # No type error
  ```
- `Final`: Declares a constant that should not be modified.
  ```python
  from typing import Final

  PI: Final[float] = 3.14159
  ```
- `Literal``: Specifies exact allowed values.
  ```python
  from typing import Literal

  mode: Literal["r", "w", "a"] = "r"  # Only "r", "w", or "a" are allowed
  ```
### Type Aliases
Create custom type names for better readability:

  ```python
  from typing import List

  Vector = List[float]

  velocity: Vector = [0.0, 9.8, -1.2]
  ```
### Practical Benefits of Variable Annotations
✅ Detects Bugs Early:
  ```python
  def square(n: int) -> int:
      return n * n

  print(square("hello"))  # Type checker flags this as an error
  ```
✅ Improves Code Documentation:

  ```python
  def greet(name: str) -> str:
      return f"Hello, {name}!"
  ```
✅ Better IDE Support:

- Auto-completion
- Type inference
- Error detection

