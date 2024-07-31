# Shell I/O redirection and Filters - Shell Init files, variables and expansions

## Topics to review

- Standard input, Standard output, redirections
- Filters
- what are wild cards
- What are and how to use special characters `*`, `\`, `~`, `\``
- How to perform arithmetic operations `$(())`
- Brace expansions
- Variables

## Content table

Shell I/O Redirections and Filters

- I/O Redirections:
  - Redirecting standard input (`<`), output (`>`), and error (`2>`)
  - Appending output (>>)
  - Redirecting both `stdout` and `stderr`
  - Using `/dev/null`
- Filters:
  - Using `cat`, `head`, `tail`, `grep`, `sort`, `uniq`, `wc`, `cut`, `awk`, and `sed`
  - Piping (`|`) to chain commands

Shell Init Files, Variables, and Expansions

- Shell Init Files:
  - Understanding shell initialization files (`.bashrc`, `.bash_profile`, `.bash_logout`)
  - Customizing the shell environment
- Variables:
  - Declaring and using variables
  - Environment variables vs. local variables
  - Special shell variables (`$?`, `$$`, `$#`, `$@`, `$\*`)
- Expansions:
  - Parameter expansion
  - Command substitution
  - Arithmetic expansion (`$(())`)
  - Brace expansion (`{}`)
  - Tilde expansion (`~`)

## Introduction

### Origin and History

#### Shell I/O Redirections and Filters

Shell I/O redirections and filters have their roots in Unix systems, which were designed for multi-user environments where users interacted with the system primarily through command-line interfaces.

The concept of redirection and piping was introduced to enhance command-line functionality, allowing users to connect multiple commands and manipulate data streams efficiently.

Filters were developed to perform specific data processing tasks, forming the basis for powerful command-line data manipulation.

#### Shell Init Files, Variables, and expansions

Shell initialization files were created to allow users to customize their shell environment, setting preferences and configurations that would be automatically applied at login or when a new shell session is started.

Variables and expansions were introduced to make the shell more dynamic and capable, allowing users to create flexible scripts and automate complex tasks.

Over time, the shell has evolved to support a wide range of variable types and expansion mechanisms, providing powerful tools for scripting and command execution.

## What is it and how to use it

### Shell I/O Redirections and Filters

#### I/O Redirections

- What is it?
  - I/O redirection allows you to change the standard input, output, and error streams for commands, directing them to or from files, devices, or other commands.
- How to use it?

  - Redirect Standard Output:

    - `>` redirects standard output to a file, overwriting its contents.
    - `>>` appends standard output to a file.
      ```bash
      echo "Hello, World!" > output.txt
      echo "Append this line" >> output.txt
      ```

  - Redirect Standard Input:
    - `<` redirects standard input from a file.
      ```bash
      wc < input.txt
      ```
  - Redirect Standard Error:
    - `2>` redirects standard error to a file.
    - `2>&1` redirects standard error to standard output.
      ```bash
      ls nonexistentfile 2> error.log
      ls nonexistentfile > output.log 2>&1
      ```
  - Discard Output:
  - Redirect output to /dev/null to discard it.
    ```bash
    command > /dev/null
    ```

#### Filters

- What is it?
  - Filters are commands that process data streams, often used with pipes to chain multiple commands together for complex data manipulation.
- How to use it?

  - Basic Filters:
    `cat`: Concatenate and display file contents.

    `head` and `tail`: Display the first or last lines of a file.

    `grep`: Search for patterns in text.

    `sort`: Sort lines of text.

    `uniq`: Remove duplicate lines.

    `wc`: Count lines, words, and characters.

    `cut`: Extract specific fields from text.

    `awk`: Pattern scanning and processing language.

    `sed`: Stream editor for filtering and transforming text.

  - Examples:
    ```bash
    cat file.txt | grep "search term" | sort | uniq > results.txt
    head -n 10 file.txt | tail -n 5
    awk '{print $1, $3}' file.txt
    sed 's/old/new/g' file.txt > updated_file.txt
    ```
  - Piping:
    - Use | to pass the output of one command as input to another.
      ```bash
      ls -l | grep ".txt" | wc -l
      ```

### Shell Init Files, Variables, and Expansions

#### Shell Init Files

- What is it?

  - Shell init files are scripts that run automatically when a shell session starts, allowing users to configure their environment.

- How to use it?
  - Common Init Files:
    - `.bashrc`: Executed for non-login interactive shells, used for setting aliases, functions, and shell options.
    - `.bash_profile`: Executed for login shells, used for setting environment variables and starting programs.
    - `.bash_logout`: Executed when a login shell exits, used for cleanup tasks.
  - Customization:
    ```bash
    # .bashrc example
    export PATH="$PATH:/usr/local/bin"
    alias ll='ls -la'
    export PS1="\u@\h:\w$ "
    ```

### Variables

- What is it?

  - Variables store data that can be used and manipulated within the shell.

- How to use it?
  - Declaring Variables:
    ```bash
    name="John"
    age=30
    ```
  - Using Variables:
    - Access variable values using $.
      ```bash
      echo "Name: $name, Age: $age"
      ```
  - Environment Variables:
    - Export variables to make them available to child processes.
      ```bash
      export PATH
      ```
  - Special Variables:
    - `$?`: Exit status of the last command.
    - `$$`: Process ID of the current shell.
    - `$#`: Number of positional parameters.
    - `$@`: All positional parameters as separate words.
    - `$*`: All positional parameters as a single word.
  - Examples:
    ```bash
    echo "Script PID: $$"
    if [ $? -eq 0 ]; then
        echo "Last command was successful."
    fi
    ```

### Expansions

- What is it?

  - Expansions allow you to manipulate variables and commands within the shell, providing powerful tools for scripting and command execution.

- How to use it?
  - Parameter Expansion:
    - `${var}`: Access the value of `var`.
    - `${var:-default}`: Use `default` if `var` is unset or null.
      ```bash
      echo "User: ${USER:-guest}"
      ```
  - Command Substitution:
    - `$(command)`: Replace with the output of command.
      ```bash
      files=$(ls)
      echo "Files: $files"
      ```
  - Arithmetic Expansion:
    - `$((expression))`: Perform arithmetic calculations.
      ```bash
      sum=$((3 + 5))
      echo "Sum: $sum"
      ```
  - Brace Expansion:
    - Generate sequences or lists of strings.
    ```bash
    echo {1..5}  # Output: 1 2 3 4 5
    echo {a,b,c}{1,2,3}  # Output: a1 a2 a3 b1 b2 b3 c1 c2 c3
    ```
  - Tilde Expansion:
    - Expand ~ to the home directory.
      ```bash
      echo "Home: ~"
      cd ~
      ```
