
# Libft
**Libft** is my own custom library, developed as part of the curriculum at Hive Helsinki. It contains a collection of standard C library functions, as well as some additional utility functions that are frequently used in programming projects. 

This library serves as a foundation for building more complex programs and demonstrates my understanding of low-level programming and C concepts.

## Prerequisites
- A C compiler (e.g., `gcc` or `clang`)  
- `make`

## Compiling
To use **Libft** in your project, follow these steps:
1. Inside your project repository, clone the 42-libft repository (this will create a `libft/` folder inside your project):
```
git clone git@github.com:k2matu/42-libft.git libft
```
2. Navigate into the libft directory and compile the library:
```
cd libft
make
cd ..
```
## Usage

To use **Libft** functions in your own project:
1. Include the Libft header in your C source file (e.g., my_program.c):
```
#include "libft.h"
#include <stdio.h>

int main(void) {
    char c = ft_toupper('a');
    printf("%c\n", c); // Output: A
    return 0;
}
```
2. Compile your program and link it with **Libft**:
```
gcc -o my_program my_program.c -L./libft -lft -I./libft
```
