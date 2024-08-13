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

  The structure of a function consists on 3 main parts: `return type`,`name of the function` and `arguments`. That may look like this:

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

#### Scope and Lifetime of Variables in Functions
- Local Variables:

  Declared within a function and accessible only within that function. They exist only during the functions's execution.

  ```c
  void dummyFunction(void)
  {
    int localVariable = 2;
  }
  ```

- Global Variables:

  Declared outside of any function and accessible throughout the program. Their lifetime is the entire duration of the program.

  ```c
  int globlalVariable = 10;
  ```

### Nested Loops
A nested loop is a loop inside another loop. It allows for the repeated execution of a set of statements multiple times, which is essential in operations like travesing multi-dimensional arrays.

```c
int i = 0, j = 0;
for (i = 0; i < 5; i++)
{
  for (j = 0; j < 5; j++)
  {
    printf("i = %d, j = %d\n", i, j);
  }
}
```

#### Common Use Cases for Nested Loops

- Multi-Dimensional Arrays:

  Nested loops are often used to iterate through multi-dimensional arrays or matrices.

  ```c
  int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
          printf("%d ", matrix[i][j]);
      }
      printf("\n");
  }
  ```

- Pattern Printing:

  Nested loops are commonly used to print patterns of stars, numbers, etc.

  ```c
  for (int i = 1; i <= 5; i++) {
      for (int j = 1; j <= i; j++) {
          printf("* ");
      }
      printf("\n");
  }
  ```

#### Controlling Loop Flow with break and continue

- break:
  Exits the loop immediately, skipping any remaining iterations.

  ```c
  for (int i = 0; i < 10; i++) {
      if (i == 5) {
          break;
      }
      printf("%d\n", i);
  }
  ```

- continue:

  Skips the current iteration and moves to the next iteration.

  ```c
  for (int i = 0; i < 10; i++) {
      if (i == 5) {
          continue;
      }
      printf("%d\n", i);
  }
  ```
