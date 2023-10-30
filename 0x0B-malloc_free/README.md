# Introduction

Before learning about dynamic memory allocation in C, it's essential to understand the fundamental concepts of the stack and the heap. These two areas of memory serve distinct purposes and play a crucial role in memory management.

# Stack VS Heap

In C programming, the stack and the heap are two distinct areas of memory used for different purposes:

## Stack
- The stack is a region of memory that operates in a last-in, first-out (LIFO) manner, like a stack of plates.
- It is typically used for storing function call information, including local variables, function parameters, and return addresses.
- Memory allocation and deallocation on the stack are automatic and fast because it involves simply adjusting the stack pointer.
- Stack memory is limited and usually smaller in size compared to the heap, so it's best suited for managing small, short-lived data structures.
- The stack is managed by the compiler and is a crucial component of the call stack, helping track function calls and returns.

## Heap
- The heap is a region of memory used for dynamic memory allocation. It's a more flexible and expansive memory space compared to the stack.
- Memory on the heap must be manually allocated and deallocated using functions like **`malloc`**, **`calloc`**, **`realloc`**, and **`free`**.
- The heap is typically used for objects and data structures that have an indefinite or longer lifespan, as well as those whose size can't be determined at compile-time.
- Since heap memory management is manual, it can lead to issues like memory leaks or fragmentation if not handled correctly.
- Proper management of heap memory is the responsibility of the programmer, and failure to deallocate memory can lead to memory leaks, where allocated memory is not returned to the system.

# Malloc and Free in C

## What is `malloc`?

`malloc` is a standard library function in C used for dynamic memory allocation. It stands for "memory allocation" and is part of the `<stdlib.h>` library. `malloc` allows you to request memory at runtime, creating a block of memory of a specified size, and returns a pointer to the first byte of the block. This memory can be used to store data, such as arrays or structures.

## What is `free` ?
`free` is a function used in C to deallocate memory previously allocated by `malloc`, `calloc`, or `realloc`. It helps prevent memory leaks and ensures that the memory is returned to the system for reuse.
