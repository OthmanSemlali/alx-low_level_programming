# Using `argc` and `argv` in C

In C programming, `argc` and `argv` are two essential components that help you handle command-line arguments. These features allow your C program to accept inputs from the command line, making it more flexible and interactive.

## What are `argc` and `argv`?

- `argc` stands for "argument count" and represents the number of command-line arguments passed to your C program.
- `argv` stands for "argument vector" and is an array of strings (character pointers) that contains the individual arguments as strings. `argv[0]` is the name of the program itself, and `argv[1]` through `argv[argc-1]` are the command-line arguments.
