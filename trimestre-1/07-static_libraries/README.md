# Static Libraries

1. Introduction to Static Libraries

   - What is a Static Library?
   - Benefits of Using Static Libraries
   - Static vs Dynamic Libraries

2. Creating Static Libraries

   - Compiling Object Files
   - Creating a Static Library Using ar
   - Indexing the Library with ranlib

3. Using Static Libraries

   - Linking a Static Library to a Program
   - Header Files and Function Prototypes

4. Tools and Commands

   - `gcc` for Compilation
   - `ar` for Creating Static Libraries
   - `ranlib` for Indexing Libraries

## Origin and Story

Static libraries have been used since the early days of UNIX to modularize code and reuse common functionality across multiple programs. They are essential in system programming and for creating reusable code libraries.

They provide a way to package multiple object files into a single file, which can then be linked to executables. This makes code distribution and management easier and ensures that programs use the same version of a library.

## What is it and how to use it

### What is it

A static library is a collection of object files bundled together into a single file, with the extension .a on Unix-like systems. It is linked into the program at compile-time, becoming part of the executable.

### Benefits of Using Static Libraries:

- **Modularity**: Break down large projects into smaller, manageable parts.
- **Reusability**: Share common code across multiple programs without duplication.
- **Performance**: Static linking can result in faster program startup times as there is no need to resolve library symbols at runtime.

### Static vs Dynamic Libraries:

- **Static Libraries**: Linked at compile-time, resulting in a larger executable. No dependency on the library at runtime.
- **Dynamic Libraries**: Linked at runtime, resulting in smaller executables. The library must be present at runtime.

## How to use it

- Creating Static Libraries

  - Step 1: Compiling Object Files
    This generates object files file1.o and file2.o from file1.c and file2.c.

    Command: `gcc -c file1.c file2.c`

  - Step 2: Creating a Static Library Using ar
    This creates a static library named libmylibrary.a containing file1.o and file2.o.

    Command: `ar rcs libmylibrary.a file1.o file2.o`

  - Step 3: Indexing the Library with ranlib

    This generates an index for the library, improving linking efficiency.

    Command: `ranlib libmylibrary.a`

- Using Static Libraries

  - Step 1: Creating a Header File
  - Step 2: Linking a Static Library to a Program
    This compiles `main.c` and links it with `libmylibrary.a`, producing an executable `main`.

    Command: `gcc main.c -L. -lmylibrary -o main`

  - Step 3: Including the Header File in Your Program
