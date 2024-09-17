# Argc and Argv

1. Introduction to Command-Line Arguments

   - What are Command-Line Arguments?
   - Importance of Command-Line Arguments
   - argc and argv in C

2. Using argc and argv

   - Understanding argc and argv
   - Accessing Command-Line Arguments
   - Common Use Cases

## Origin and Story

Command-line arguments have been an integral part of C programming since its inception. They provide a way for users to pass information to programs at runtime, allowing for flexible and dynamic program execution.

They enable programs to be configured without changing the source code, facilitating the creation of versatile and user-friendly applications.

## What is it and how to use it

### What are Command-Line Arguments?

Command-line arguments are values passed to a program when it is executed. They provide a way to influence the behavior of the program at runtime.

### How to use Command-Line Arguments

- Understanding `argc` and `argv`:

  - `argc` (Argument Count): An integer that represents the number of command-line arguments passed to the program, including the program name.
  - `argv` (Argument Vector): An array of character pointers listing all the arguments.

  Syntax:

  ```c
  int main(int argc, char *argv[])
  {
    // Your code here
    return 0;
  }
  ```

- Accessing Command-Line Arguments:

  - `argv[0]`: Contains the program name.
  - `argv[1]`, `argv[2]`, ..., `argv[argc - 1]`: Contain the additional arguments passed to the program.

  Example:

  ```c
  int main(int argc, char *argv[])
  {
    int i;
    for (i = 0; i < argc; i++)
    {
      printf("Argument %d: %s\n", i, argv[i]);
    }
    return 0;
  }
  ```

  Output Example:

  ```bash
    $ ./program arg1 arg2 arg3
    Argument 0: ./program
    Argument 1: arg1
    Argument 2: arg2
    Argument 3: arg3
  ```

### Exercise

1. Program to print the sum of two numbers passed as command-line arguments.
1. Step1: Write a Program to Sum Two Numbers
1. Step 2: Compile and Run the Program


    - Command: `gcc -o sum sum.c`
    - Run: `./sum 5 10`
    - Output: `Sum: 15`

3. Step 3: Add Error Handling for Non-Numeric Input
