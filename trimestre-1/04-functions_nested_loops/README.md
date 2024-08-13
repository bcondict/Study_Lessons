# Functions and Nested Loops

## Concepts to cover

- Introduction to Functions
  - What are functions?
  - Benefits of Using Functions
  - Functions Declaration, Definition, and Call
  - Return Types and Parameters
  - Scope and Lifetime of Variables in Functions
  - Recursive Functions
- Nested Loops
  - Introduction to Loops
    - `for` loop
    - `while` loop
    - `do-while` loop
  - What are Nested Loops
  - Common Use Cases for Nested Loops
  - Controlling loop flow with `break` and `continue`

## Origin and History

### Functions

Functions in programming originated from the need to structure and organize code better. Early programming languages lacked modularity, leading to large, difficult-to-manage codebases. The introduction of functions allowed for code reuse, improved readability, and easier debugging.

In C, functions have been a core feature since its inception. The language's design emphasizes efficiency and control, and functions play a crucial role in achieving these goals by breaking down complex problems into smaller, manageable parts.

### Loops, Nested loops

Loop constructs, such as `for`, `while` and `do-while`, were developed to perform repetitive task efficiently. Nested loops were introduced to handle more complex task, such as processing multi-dimensional arrays and working with matrices.

C's loop constructs provide programmers with the tools to execute code repeatedly. Nested loops extend this capability, allowing for the execution of loops within loops, which is essential in various algorithms and data processing tasks.

## What Is It and How To Use It?

### Functions

Functions are self-contained block of code designed to perform a specific task. They allow for code reuse, reduce redundancy, and improve code readability.

- Structure:

  The structure of a function consists on 3 main parts: `return type``,`name of the function` and `arguments`. That may look like this:

  ```
  {return type} {functions name}({arguments})
  ```

- Declaration:

  Before using a function, it must be declared. The declaration informs the compiler about the function's name, return type and parameters.

  ```c
  int add(int a, int b); /* function declaration */
  ```

- Definition:

  The definition provides the actual implementation of the function.

  ```c
  int add(int a, int b)
  {
    return (a + b);
  }
  ```

- Call:

  A function is called by using its name and passing the required arguments.

  ```c
  int result = add(5, 3);
  ```
