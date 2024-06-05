# Preprocessor and Structures

## Objective

The objective for the today's space is:

- discuss in depth about the `Preprocessor` step
- Understand when and how to use `MACROS`

That's for the first part, and for the second part, we will see:

- What are structures in C
- How to use them
- How to sue `typedef` to define a new structure

## Preprocessor

### Story and Concept

The preprocessing step in C is the first phase of the compilation, where t he preprocessor handles directives --commands starting with `#`.
It manipulates and prepares the source code before it is actually compiled.

Macros are defined using `#define`, are one of the most powerful features used during this phase. They allow you to define constants and write functions-like expressions t hat expand inline.

### How to Use Macros

Macros are used to:

1. Define constants to make code more readable and maintainable.
2. Create inline functions that can prevent overhead associated with functions calls in performance-critical code.

See how to create macros in ![Header File](./main.h)

### Exercises

1. Define a macro `SQUARE(x)` that computes the square of a number.
2. Create a macro `PRINT_INT(x)` that prints an integer with the message "the value is:" followed by the integer.

## Common predefined Macros

- `__DATE__`: The current date as the string literal.
- `__TIME__`: The current time as a string literal.
- `__FILE__`: The current filename as a string literal.
- `__LINE__`: The current line number a constant

## Structures

### Story and Concept

Structures in C are user-defined data types that allow grouping different data items of different kinds.
They are crucial for organizing complex data, making the code more modular and manageable.

### When, Why, and How to Use Structures

Use structures to:

1. Model real-world entities and relationships.
2. Pass multiple data items as a single object to functions.
3. Implement other data structures like list, stacks, queues, etc.

### How to use `typedef`

`typedef` is used to create a new name for an existing type (often with structures), which can simplify code and improve its readability

See how to use and create structures in ![Header File](./main.h)

### Exercises

1. Define a structure `Rectangle` with length and width as integers. Write a function to calculate the area of the rectangle.
2. Create a `typedef` for a structure `Point` that represents a point in 2D space with `int` coordinates, and write a function to calculate the distance from the origin (0, 0);
