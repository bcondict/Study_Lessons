# C Basics

## Topics to review

- Introduction to C
  - History and Origin of C
  - Importance and Application of C
  - Structure of C Program
- [Compilation Process](#CompilationProcess)
  - Steps of Compilation: `Preprocessing`, `Compilation`, `Assembly`, `Linking`
  - Tools: Compiler (e.g., `GCC`), Assembler, Linked
  - Generating Executables
- [Basic Syntax and Data Types](#)
  - Variables and constants
  - Data Types (int, char float, double)
  - Operators (Arithmetic, Relational, Logical, Assignment, Bitwise)
- [Control Structures](#)
  - Function Declaration and Definition
  - Function Parameters and Return Values
  - Scope and Lifetime of Variables
- Input and Output
  - Using `printf` and `scanf` for I/O
  - Formatting output

## Introduction

### Origin of C programming

The C programming language was developed by Dennis Ritchie at Bell Labs in the early 1970s as an improvement over the B language. It was designed to develop the Unix operating system, which was a revolutionary step in operating systems.

C provided low-level access to memory, a simple set of keywords, and a clean style, making it ideal for system programming, including operating systems and compilers.

Over the years, C has become one of the most widely used programming languages in the world, influencing many modern languages like C++, Java, and Python.

### Purpose and Use Cases

C was designed to offer efficiency and control over system resources. It allows developers to write programs that can manipulate hardware directly, making it suitable for system-level programming.

C is used in developing operating systems, embedded systems, game development, and applications where performance is critical. It is also the foundation for learning other programming languages due to its syntax and structure.

## Compilation Process

The compilation process is C is the series of steps that convert human-readable source code into and executable program that a computer can run. This process consists of several stages: `preprocessing`, `compilation`, `assembly`, and `linking`.

1. Preprocessing

  The preprocessing stage Handles directives for the preprocessor, which begins with `#`. It processes directives such as `#include`, `#define`, and conditional compilation directives.

  - Tasks:

    - Include header files: `#include <stdio.h>`
    - Define macros: `#define PI 3.14159`
    - Conditional compilation: `#ifdef DEBUG`

  - Output:
    The output is a modified version of the source code with all the preprocessor directives resolved. The file is often named with a `.i` extension

2. Compilation

  The compilation stage translates the preprocessed source code into assembly code. The compiler checks for syntax errors and translates high-level language constructs into low-level instructions.

  - Task:
  Convert C code into assembly language.

  - Output:
  The output is an assembly code file, often named with a `.s` extension.

3. Assembly

  The assembly stage converts assembly code into machine code, which is a binary representation of the instructions that the CPU can execute.

  - Task:
  Translate assembly language into machine code.

  - Output:
  The output is an object file containing machine code, often named with a `.o` extension.

4. Linking

  The linking stage combines object files and libraries to create an executable program. It resolves external symbols and addresses used in the program.


## What is it, and How to use it?

###  Basic structure of a C Program
A simple C program consists of functions, variables, and statements. The `main` function is the entry point of any C program.

```c
# include <stdio.h>

int main(void)
{
    printf("Hello, World!\n") /* print a message into the console */
    return (0); /* Exit the program */
}
```

### Variables and Data Types
Variables are used to store data in memory. C provides various data types for different kinds of data.
- Integer (`int`):
  Used to store whole numbers.
  ```c
  int age = 25;
  ```
- Character (`char`):
  Used to store single characters.
  ```c
  char initial = 'A';
  ```
- Floating Point (`float` and `double`):
  Used to store decimal numbers.
  ```c
  float pi = 3.14f;
  double e = 2.7182818284
  ```
- Constants:
  Immutable Variables
  ```c
  const int MAX = 100;
  ```

### Operators
C provides various operators for performing operations on variables.

- Arithmetic Operators: `+`, `-`, `*`, `/`, `%`
  ```c
  int sum = a + b;
  ```

- Relational Operators: `==`, `!=`, `<`, `>`, `<=`, `>=`
  ```c
  if (a == b) { /* ... */ }
  ```

- Logical Operators: &&, ||, !
  ```c
  if (a > b && b < c) { /* ... */ }
  ```

- Assignment Operators: `=`, `+=`, `-=`, `*=`, `/=`

  ```c
  a += 5;
  ```
- Bitwise Operators: `&`, `|`, `^`, `~`, `<<`, `>>`

  ```c
  int result = a & b;
  ```

### Control Structures
- Conditional Statements:

  - `if` Statement:
    ```c
    if (condition) {
        // Code to execute if condition is true
    }
    ```

  - `if-else` Statement:
    ```c
    if (condition) {
        // Code to execute if condition is true
    } else {
        // Code to execute if condition is false
    }
    ```

  - `switch` Statement:
    ```c
    switch (variable) {
        case 1:
            // Code for case 1
            break;
        case 2:
            // Code for case 2
            break;
        default:
            // Code if no case matches
            break;
    }
    ```
- Loops:

  - `for` Loop:
    ```c
    for (int i = 0; i < 10; i++) {
        printf("%d\n", i);
    }
    ```
  - `while` Loop:
  ```c
  int i = 0;
  while (i < 10) {
    printf("%d\n", i);
    i++;
  }
  ```

- `do-while` Loop:
  ```c
  int i = 0;
  do {
    printf("%d\n", i);
    i++;
  } while (i < 10);
  ```

### Functions
Functions are blocks of code that perform a specific task. They promote code reuse and modularity.

- Function Declaration and Definition:
  ```c
  int add(int a, int b);  // Function declaration

  int add(int a, int b) { // Function definition
    return a + b;
  }
  ```

- Function Parameters and Return Values:
  ```c
  int multiply(int x, int y) {
    return x * y;
  }
  ```

- Scope and Lifetime of Variables:
  - Local Variables: Declared within a function and accessible only within that function.
  - Global Variables: Declared outside any function and accessible throughout the program.

### Input and Output
- `printf` Function: Used for output.
  ```c
  printf("The value is %d\n", value);
  ```

- `scanf` Function: Used for input.
  ```c
  int age;
  printf("Enter your age: ");
  scanf("%d", &age);
  ```

# Author
- [Jesus Junco](https://www.linkedin.com/in/dev-jesus-junco/)
