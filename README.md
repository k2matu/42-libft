Libft
Libft is my own custom library, developed as part of the curriculum at Hive Helsinki. It contains a collection of standard C library functions, as well as some additional utility functions that are frequently used in programming projects. This library serves as a foundation for building more complex programs and demonstrates my understanding of low-level programming and C concepts.

Features
Libft implements a variety of functions, including:

Memory manipulation: Functions like memset, memcpy, malloc, etc.
String manipulation: Functions like strcpy, strlen, strcat, and more.
Character checks: Functions such as isalpha, isdigit, toupper, etc.
Linked list management: Functions to manipulate linked lists for dynamic data structures.
Custom utility functions: Additional helper functions not included in the standard C library, but useful for everyday programming tasks.
Installation
To use Libft in your project, follow these steps:

Clone the repository:
1. git clone https://github.com/yourusername/libft.git
Navigate into the directory:
2. cd libft
Compile the library using make:
3. make
Include the compiled libft.a in your project:
4. gcc -o my_program my_program.c -L. -lft
