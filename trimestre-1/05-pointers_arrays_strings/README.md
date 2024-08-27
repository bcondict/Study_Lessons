# Pointers, Arrays and Strings

## Topics to review

- Pointers
  - What is a Pointer?
  - Pointer Declaration and Initialization
  - Dereferencing a Pointer
  - Pointer Arithmetic
  - Pointers and Arrays
- Arrays
  - What is an Array?
  - Array Declaration and Initialization
  - Accessing Array Elements
  - Array and Pointers Relationship
- String
  - What is a String in C?
  - String Declaration and Initialization
  - String manipulation (using standard library functions)

## Origin and Story

### Pointers

The concept of pointers was introduced in the early days of C and C-like languages. Pointers allow direct memory manipulation, which was crucial for system programming, particularly in operating system development. The ability to reference memory addresses directly made C a powerful language for low-level programming.

Pointers give C its flexibility and power, allowing for dynamic memory management, efficient array handling, and complex data structures like linked lists and trees.

### Arrays

Arrays have been fundamental in programming since the advent of the first high-level languages. They allow for the storage and manipulation of sequences of data, which is essential for many computational tasks.

Arrays provide a way to store multiple values of the same type in a contiguous block of memory, which simplifies data management and processing.

### String

In C, strings are implemented as arrays of characters. Unlike other languages, C does not have a built-in string type. This approach provides flexibility and efficiency but requires careful management of memory.

Strings are fundamental to programming for handling text data, user input, file manipulation, and many other tasks. Understanding how strings work in C is essential for effective programming.

## What is it and how to use it?

### Pointers

- What is a Pointer:

  A pointer is a variable that stores the memory address of another variable.

- Pointer Declaration and Initialization:

  - **Syntax**: `type *pointer_name;`
  - Example:

    ```c
    int number = 10;
    int *pointer = &number;
    ```

- Dereferencing a Pointer:

  - Dereferencing is accessing the value at the address stored in the pointer.
  - Example:

    ```c
    int value = *pointer;
    ```

- Pointer Arithmetic:

  - Pointers can be incremented and decremented to navigate through memory.
  - Example:

    ```c
    pointer++;
    ```

- Pointers and Arrays:
  - The name of an array is a pointer to its first element
  - Example:
    ```c
    int array[] = {1, 2, 3, 4, 5};
    int *pointer = array; /* pointer points to array[0] */
    ```

### Arrays

- What is an Array:

  - An array is a collection of elements of the same type stored in contiguous memory locations.

- Array Declaration and Initialization:

  - **Syntax**: `type array_name[size];`
  - Example:

    ```c
    int numbers[5] = {1, 2, 3, 4, 5};
    ```

- Accessing Array Elements:

  - Array elements are accessed using the index.
  - Example:

    ```c
    int value = numbers[2]; /* value is 3 */
    ```

- Array and Pointers Relationship:
  - The name of an array is a pointer to its first element.
  - Example:
    ```c
    int array[] = {1, 2, 3, 4, 5};
    int *pointer = array; /* pointer points to array[0] */
    ```

### Strings

- What is a String in C:

  - A string is an array of characters terminated by a null character `'\0'`.

- String Declaration and Initialization:

  - **Syntax**: `char string_name[] = "string";` or `char *string_name = "string";`
  - Example:
    ```c
    char name[] = "John";
    char *name2 = "Doe";
    ```

- String manipulation (using standard library functions):
  - C provides standard library functions for string manipulation.
  - Example:
    ```c
    char name[] = "John";
    int length = strlen(name); /* length is 4 */
    ```

## Practical Example

Implement a Program to Reverse a String Using Pointers

1. Declare a string
2. Write a function to Reverse the string
3. Print the reversed string

[See the full code example](./reverseString.c)
