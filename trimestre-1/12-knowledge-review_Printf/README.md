# Knowledge Review 1

## Introduction

This is the first knowledge review of the course. It will cover the following topics:

- Git workflow
  - States of git, how to move between the stages
  - Branches, how to use branches, and move between them, create them, etc.
- Datatypes (int, char, double)
- Pointers (char \*, int \*) and Arrays (essentially the same as pointers)
- Conditionals and loops
- Argc, argc
- Malloc
- Strucutres
- Funtion pointers
- Variadic funtions

Those are the topics we have covered so far (without taking into account linked list).

## Exercises

### Exercise 1

1. Clone this repository
2. Create a new bran with your name
3. Create folder called `exercises` and add a file called `ex1.c`
4. Create a main function that reads the arguments passed by the user when executing the program (i.e. `./ex1 argument1 argument2`)

   The arguments has to be:

   - A string: The operation to be performed between the following two number (`add`, `sub`, `mul`, `div`)
   - N numbers: The n numbers to be operated

5. Parse the desiered argument to be cast from `char *` into `int` value, if the argument passed can not be parsed into an integer, print an error message and exit the program.
6. Create an structure called `operation` that will have the following fields:

   Hold multiple pointer functions of the operation to be performed. I.e `add`, `sub`, `mul`, `div`

7. Create the functions of the operations the following way:

- `int add(int n, ...)`

8. In the main function allocate memory for the structure `operation`, check if the operation passed is valid and assign the corresponding function to the pointer.
9. In the main function print the result of the operation.
