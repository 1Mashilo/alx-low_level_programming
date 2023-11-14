# 0x15. C - File I/O

## Overview

This project covers the fundamental concepts of File I/O in the C programming language. It includes various tasks that involve creating, reading, writing, and manipulating files, understanding file descriptors, and working with ELF headers.

## Resources

- [File Descriptors](https://alx-intranet.hbtn.io/rltoken/Duva-9Fjyskt39R__Nnazg)
- [C Programming in Linux Tutorial #024 - open() read() write() Functions](https://alx-intranet.hbtn.io/rltoken/9Tmu01qEnA9q9khz3gqzJQ)

### Man Pages

- `open`
- `close`
- `read`
- `write`
- `dprintf`
- `lseek`
- `printf`

## Learning Objectives

- Learn to create, open, close, read, and write files in C.
- Understand file descriptors and the three standard file descriptors: STDIN_FILENO, STDOUT_FILENO, STDERR_FILENO.
- Use I/O system calls such as `open`, `close`, `read`, and `write`.
- Work with flags like `O_RDONLY`, `O_WRONLY`, and `O_RDWR` when opening files.
- Set file permissions using the `open` system call.
- Understand the difference between functions and system calls.
- Gain knowledge about ELF headers and display information from them.

## Project Tasks

### 0. Tread lightly, she is near
Write a function that reads a text file and prints it to the POSIX standard output.

### 1. Under the snow
Create a function that creates a file.

### 2. Speak gently, she can hear
Write a function that appends text at the end of a file.

### 3. cp
Write a program that copies the content of a file to another file.

### 4. elf (Advanced)
Write a program that displays information contained in the ELF header at the start of an ELF file.

## Compilation and Testing

All C files should be compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`. Each task has its own test cases to ensure correctness.

## Directory Structure

- `0x15-file_io/`
  - `main.h`: Header file containing function prototypes.
  - `0-read_textfile.c`: Task 0 implementation.
  - `1-create_file.c`: Task 1 implementation.
  - `2-append_text_to_file.c`: Task 2 implementation.
  - `3-cp.c`: Task 3 implementation.
  - `100-elf_header.c`: Task 4 (Advanced) implementation.
  - ...


