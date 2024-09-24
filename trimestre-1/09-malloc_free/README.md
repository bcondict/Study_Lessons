# Malloc and Free

## Concept to cover

- Introduction to Dynamic Memory Allocation
  - What is Dynamic Memory Allocation?
  - Benefits of Using Dynamic Memory Allocation
- Understanding `malloc`
  - What is `malloc`?
  - How `malloc` Works
  - Syntax and Usage of `malloc`
- Using `malloc` in C Programs
  - Allocating Memory
  - Checking for Successful Allocation
  - Initializing Allocated Memory
  - Freeing Allocated Memory
- Common Errors and Debugging
  - Memory Leaks
  - Dangling Pointers
  - Double Free Errors

## Origin and Story

In early programming, memory allocation was static and predefined. Dynamic memory allocation became essential as programs grew in complexity, requiring more flexible and efficient memory management.

It allows programs to request memory as needed, which can lead to more efficient use of memory resources. This is crucial for applications with varying memory requirements.

`malloc` (memory allocation) was introduced in the C Standard Library to provide a way for programs to allocate memory dynamically. It has since become a fundamental part of C programming.

## What is it and how to use it

### What is Dynamic Memory Allocation?

- What is Dynamic Memory Allocation?

  Dynamic memory allocation refers to the process of allocating memory storage during the runtime of the program. This contrasts with static memory allocation, which occurs at compile time.

- Benefits of Using Dynamic Memory Allocation:

  **Flexibility**: Allocate memory as needed.

  **Efficiency**: Use memory more efficiently by allocating only what is necessary.

  **Scalability**: Handle data structures of varying sizes.

### What is `malloc`?

- What is `malloc`?
  `malloc` is a function in the C Standard Library used to allocate memory dynamically. It returns a pointer to the allocated memory block, which can be used to store data.

### How to use it

1. Syntax and Usage of `malloc`:

   - Syntax:
     ```c
     #include <stdlib.h>
     void *malloc(size_t size);
     ```
   - Parameters:
     `size`: The number of bytes to allocate.
   - Return Value:
     A pointer to the allocated memory block, or `NULL` if allocation fails.
   - Example:

     ```c
     #include <stdio.h>
     #include <stdlib.h>

     int main(void) {
         int *ptr;
         ptr = (int*)malloc(sizeof(int)); // Allocate memory for one integer

         if (ptr == NULL) {
             printf("Memory allocation failed\n");
             return 1;
         }

         *ptr = 100;
         printf("Value: %d\n", *ptr);

         free(ptr); // Free the allocated memory
         return 0;
     }
     ```

2. You can perform operations on the allocated memory block, such as storing data or creating data structures.

   - Example
     ```c
     int *arr = (int*)malloc(10 * sizeof(int)); // Allocate memory for an array of 10 integers
     ```

3. Initializing Allocated Memory:

   - Allocated memory is uninitialized. It’s good practice to initialize it.

   - Example:
     ```c
     for (int i = 0; i < 10; i++) {
         arr[i] = 0; // Initialize array elements
     }
     ```

4. Freeing Allocated Memory:

   - Use free to deallocate memory that was previously allocated with `malloc`.
   - Example:
     ```c
     free(arr); // Free the allocated memory
     ```

## Common Errors and Debugging

### Memory Leaks:

- Occur when allocated memory is not freed, leading to wasted memory resources.

- Solution: Ensure that every `malloc` has a corresponding `free`.

### Dangling Pointers:

- Occur when a pointer still points to a memory location that has been freed.

- Solution: Set the pointer to `NULL` after freeing it.

### Double Free Errors:

- Occur when free is called more than once on the same memory allocation.

- Solution: Ensure that free is called only once for each allocated memory.
