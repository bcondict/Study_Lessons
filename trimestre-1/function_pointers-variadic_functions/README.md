# Pointer functions and Variadic functions

## Objective

The objective for the today's space is:

- What are pointer functions
- How to use them

- Understand the concept of variadic functions
- How to use them

## Pointer Functions

### Story and Concept

Function pointers in C have their roots in the early days of the language, allowing for more dynamic and flexible code.

The concept is simple: just like we have pointers to variables (int, char, etc.), we can have pointers to functions. This allows functions to be passed as arguments, stored in arrays, and invoked dynamically.

### When and Why to Use Pointer Functions

- Callbacks: Functions that are passed as arguments to other functions.
- Dynamic function invocation: Selecting a function to be called at runtime.
- State machines: Managing different states and transitions efficiently

### How to Use Pointer Functions

- Declare a pointer to a function
- Assign the address of the function to the pointer
- Invoke the function using the pointer

See how to use pointer functions in [function-pointers.c](./function-pointers.c)

### Exercises

1. Write a program that uses a function pointer to switch between different mathematical operations (e.g., add, subtract, multiply, divide).

2. Implement a simple menu system using function pointers where different options invoke different functions.

## Variadic Functions

### Story and Concept

Variadic functions, like `printf`, can take a variable number of arguments. This feature originated from the need for functions that can operate on different numbers of arguments without being rewritten for each case. The C Standard Library's `printf` and `scanf` functions are prime examples.

### When and Why to Use Variadic Functions

- Situations where the number of arguments needed is not known beforehand

### How to Use Variadic Functions

- Use the `stdarg.h` header file
- Define a function with `...` as the last argument

See how to use variadic functions in [variadic-functions.c](./variadic-functions.c)

### Exercises

1. Create a variadic function average that calculates the average of its arguments.
2. Implement a variadic function concat_strings that concatenates multiple strings into one.
