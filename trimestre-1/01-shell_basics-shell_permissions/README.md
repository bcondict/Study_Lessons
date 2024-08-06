# Shell basics and Shell permissions

## Objectives

The objective for today's session is:

- understand Shell Basics:
  - Command-line interface (CLI)
  - Common shell commands
  - Navigation in the file system
  - File and directory manipulation
- understand Shell Permissions:
  - Understanding Linux file permissions
  - Modifying permissions with `chmod`, `chown`, and `chgrp`

## Origin and Story

The shell is a fundamental component of Unix-like operating systems, introduced in the early 1970s. The Bourne Shell (sh), developed by Stephen Bourne at Bell Labs, was one of the first Unix shells.

Initially used as an interactive command interpreter for Unix systems. Provided a way to automate tasks via scripting.

## What is it and how to use it

### What is it

Shell Basics:

The shell is a command-line interface that allows users to interact with the operating system. It provides a powerful way to control your system through text commands.

Shell permissions:

Shell permissions control who can `read`, `write`, or `execute` a file or directory. Permissions are represented by a combination of read (`r`), write (`w`), and execute (`x`) for the `owner`, `group`, and `others`.

### How to use it

Shell basics common commands:

- `pwd`: Print the current working directory.
- `ls`: List files and directories in the current directory.
- `cd <directory>`: Change the current directory.
- `mkdir <directory>`: Create a new directory.
- `rm <file>`: Remove a file.
- `cp <source> <destination>`: Copy a file or directory.
- `mv <source> <destination>`: Move or rename a file or directory.

Shell permissions:

- View permissions:
  - `ls -l`
- Change permissions:
  - `chmod u+x <file>`: Add execute permission for the user.
  - `chmod g-w <file>`: Remove write permission for the group.
  - `chmod o+r <file>`: Add read permission for others.

### Practical Exercise

- Create a new directory `my_project`.
  ```bash
  mkdir my_project
  cd my_project
  ```
- Create a new file `README.md`.
  ```bash
  touch README.md
  ```
- Create a new sub-directory `src`.
  ```bash
  mkdir src
  ```
- Move the `README.md` file to the `src` directory.
  ```bash
  mv README.md src/
  ```
- List the files in the sub-directory.
  ```bash
  ls
  ```
- View the permissions of the file.
  ```bash
  ls -l src/README.md
  ```
- grant execute permission to the owner of the `README.md` file.
  ```bash
  chmod u+x src/README.md
  ```
- Verify the permissions have been updated.
  ```bash
  ls -l src/README.md
  ```
