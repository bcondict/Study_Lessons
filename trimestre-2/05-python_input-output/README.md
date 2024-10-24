# Class: Python Input/Output (I/O)

## concepts to cover

- Introduction to Python I/O

  - Importance of I/O Operations
  - Basic Input and Output Functions

- Reading from and Writing to Files

  - Opening and Closing Files
  - Reading from Files
  - Writing to Files
  - File Modes and Context Managers

- Working with Different File Types

  - Text Files
  - Binary Files

- Practical Examples and Exercises

  - Simple I/O Operations
  - Advanced File Handling

## Origin and Story

Input and output operations are fundamental to any programming language. They enable interaction with users and other systems through data exchange.

I/O operations allow programs to read from and write to various data sources, such as files, databases, and user inputs, making them essential for data processing and persistence.

## What is it, and How to Use it?

I/O operations enable data exchange between the program and the external environment, facilitating tasks such as reading user input, writing to files, and handling network communications.

### Basic Input and Output Functions:

- `input()`: Reads a line of input from the user.

  ```python
  name = input("Enter your name: ")
  print(f"Hello, {name}!")
  ```

- `print()`: Outputs data to the console.

  ```python
  print("Hello, World!")
  Reading from and Writing to Files
  ```

### Opening and Closing Files:

- `open()`: Opens a file and returns a file object.

  Syntax:

  ```python
  file = open("filename.txt", "mode")
  ```

- `close()`: Closes the file.

  Syntax:

  ```python
  file.close()
  ```

### Reading from Files:

- `read()`: Reads the entire file.

```python
  with open("example.txt", "r") as file:
  content = file.read()
  print(content)
```

- `readline()`: Reads one line at a time.

  ```python
  with open("example.txt", "r") as file:
  line = file.readline()
  print(line)
  ```

- `readlines()`: Reads all lines and returns a list.

  ```python
  with open("example.txt", "r") as file:
  lines = file.readlines()
  for line in lines:
  print(line.strip())
  ```

### Writing to Files:

- `write()`: Writes a string to the file.

  ```python
  Copiar código
  with open("example.txt", "w") as file:
  file.write("Hello, World!")
  ```

- `writelines()`: Writes a list of strings to the file.

  ```python
  lines = ["First line\n", "Second line\n"]
  with open("example.txt", "w") as file:
  file.writelines(lines)
  ```

### File Modes and Context Managers:

- File Modes:
  - `"r"`: Read mode.
  - `"w"`: Write mode.
  - `"a"`: Append mode.
  - `"b"`: Binary mode.
  - `"+"`: Read and write mode.
- Context Managers:
  - Using the `with` statement to ensure files are properly closed after operations.
    ```python
    with open("example.txt", "r") as file:
    content = file.read()
    print(content)
    ```

### Working with Different File Types

- Text Files:

  - Reading and writing plain text files.
    ```python
    with open("example.txt", "w") as file:
    file.write("This is a text file.")
    ```

- Binary Files:

  - Reading and writing binary files.
    ```python
    with open("example.bin", "wb") as file:
    file.write(b"This is a binary file.")
    ```

## Practical Exercises

### Exercise 1

1. Objective:
   Read from one file called `source.txt` and write its content to another file called `destination.txt` and print the content with the message `Content copied from source.txt to destination.txt`
2. Exercise:
   found [input_output.py](./input_output.py)
