# ft_printf

ft_printf is a reimplementation of the standard C printf() function, designed for efficient formatted output. This project was developed to deepen my understanding of formatted I/O and to practice optimization techniques, with a particular focus on minimizing system calls through the use of a linked-list buffer.

## Key Features

- **Custom implementation of printf:** Replicates most of the original `printf()` functionality.
- **Optimization via Buffering:** Utilizes a linked-list buffer to significantly reduce the number of `write()` system calls, thus improving performance.
- **Memory-efficient:** Efficient management of memory using linked lists to handle buffering internally.

## Supported Conversions

This implementation supports the following conversions:

| Specifier | Description                       |
|-----------|-----------------------------------|
| `%c`      | Character                         |
| `%s`      | String                            |
| `%p`      | Pointer address                   |
| `%d`, `%i`| Signed decimal integer            |
| `%u`      | Unsigned decimal integer          |
| `%x`      | Unsigned hexadecimal (lowercase)  |
| `%X`      | Unsigned hexadecimal (uppercase)  |
| `%%`      | Literal percent sign              |

## Installation

Clone the repository and compile using the provided Makefile:

```bash
git clone https://github.com/Yonaim/ft_printf.git
cd ft_printf
make
```

This will generate the `libftprintf.a` static library.

## Usage

Include the header file and link the library in your C project:

```c
#include "ft_printf.h"
```

Compile your program with the library:

```bash
gcc yourfile.c -L. -lftprintf -I includes -o yourprogram
```

## Example

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s, your score is %d!\n", "World", 42);
    return 0;
}
```

## Optimization Technique

To optimize output efficiency, this implementation stores formatted characters temporarily in a linked-list buffer before making a single call to `write()`. This reduces the overhead associated with multiple system calls, aligning the library's performance more closely with the original `printf()` function.
