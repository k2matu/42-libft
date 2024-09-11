
# Libft

Libft is my own custom library, developed as part of the curriculum at Hive Helsinki. It contains a collection of standard C library functions, as well as some additional utility functions that are frequently used in programming projects. This library serves as a foundation for building more complex programs and demonstrates my understanding of low-level programming and C concepts.
## Installation
To use Libft in your project, follow these steps:
```
1. Clone the repository:
    git clone git@github.com:k2matu/libft.git
2. Navigate into the directory:
    cd libft
3. Compile the library using make:
    make
4. Include the compiled libft.a in your project:
    gcc -o my_program my_program.c -L. -lft
```

## Usage

You can use the functions from the library just like standard C functions by including the libft.h header in your project:
```
#include "libft.h"
```
For example:
```
#include "libft.h"

int main(void)
{
    char *str = ft_strdup("Hello, world!");
    ft_putstr(str);
    free(str);
    return (0);
}
```

