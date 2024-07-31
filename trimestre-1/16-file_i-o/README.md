# File I/O

## Objective

The objective for the today's session is:

- Understand what's File I/O
  - Input and Output
  - Reading and Writing files
  - File handling
  - Error handling
- File Descriptors and Basic File Operations:
  - Understanding file descriptors
  - Opening and closing files using `open` and `close
  - Reading from and writing to files using `read` and `write`
  - Using `dprintf` for formatted output to a file descriptor
- Error Handling in File I/O:
  - Checking for errors in file operations
  - Using `errno` for error reporting

## Origin and Story

File I/O operations in C are based on low-level system calls provided by Unix operating systems. These operations allow programs to interact with the file system by manipulating files directly through file descriptors.

Introduced in the early days of Unix to provide a simple and efficient way to perform file operations. Enabled the development of complex software systems by allowing programs to store and retrieve data from files.

Over time, file I/O in C has been standardized by POSIX, ensuring compatibility across different Unix-like systems. Higher-level I/O functions in the C standard library (e.g., `fopen`, `fclose`, `fread`, `fwrite`) were built on top of these low-level calls.

## What is it and how to use it

### What is it

#### File Descriptors and Basic File Operations

- File descriptors

  - file descriptor is a non-negative integer that uniquely identifies an open file within a process.
  - File descriptors are used as handles for performing operations on files.

- Basic File Operations

  - `open`:
    Is a system call used to open and obtain its file descriptor. It allows specifying access modes (e.g., read, write) and file permissions.

    Syntax:

    ```c
    #include <fcntl.h>

    int open(const char *pathname, int flags, mode_t mode);
    ```

    Common flags:

    - `O_RDONLY`: Open for reading only.
    - `O_WRONLY`: Open for writing only.
    - `O_RDWR`: Open for reading and writing.
    - `O_CREAT`: Create the file if it doesn't exist.
    - `O_APPEND`: Append data to the end of the file.
    - `O_TRUNC`: Truncate the file to zero length.

    Example:

    ```c
    int fd = open("file.txt", O_WRONLY | O_CREAT, 0644);

    if (fd == -1) {
      perror("open");
      return (1);
    }
    ```

  - `close`:
    Is a system call used to close an open file descriptor, releasing any associated resources.

    Syntax:

    ```c
    #include <unistd.h>

    int close(int fd);
    ```

    Example:

    ```c
    if (close(fd) == -1) {
      perror("close");
      return (1);
    }
    ```

  - `read`:
    Is a system call used to read data from an open file descriptor into a buffer. It returns the number of bytes read or -1 on error.

    Syntax:

    ```c
    #include <unistd.h>

    ssize_t read(int fd, void *buf, size_t count);
    ```

    Example:

    ```c
    char buffer[1024];
    ssize_t bytes_read = read(fd, buffer, sizeof(buffer) - 1);

    if (bytes_read == -1) {
      perror("read");
      return (1);
    }

    buffer[bytes_read] = '\0';
    ```

  - `write`:
    Is a system call used to write data from a buffer to an open file descriptor. It returns the number of bytes written or -1 on error.

    Syntax:

    ```c
    #include <unistd.h>

    ssize_t write(int fd, const void *buf, size_t count);
    ```

    Example:

    ```c
    const char *message = "Hello, world!\n";
    ssize_t bytes_written = write(fd, message, strlen(message));

    if (bytes_written == -1) {
      perror("write");
      return (1);
    }
    ```

  - `dprintf`:
    Is a function used to write formatted output to a file descriptor. It's similar to `printf` but writes to a file instead of `stdout`.

    Syntax:

    ```c
    #include <stdio.h>

    int dprintf(int fd, const char *format, ...);
    ```

    Example:

    ```c
    dprintf(fd, "The answer is %d\n", 42);
    ```

## Practical Exercise

1. Create a new C file called `file_io.c`.

Write a program that creates and writes to a new file named `output.txt`.

2. Read from a File:

Extend the program to read the contents of output.txt and display them on the console.

Implementation found in [file_io.c](file_io.c).
