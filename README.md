# libft

## Verision History
Latest:
v2.0: file structure made more efficient and scalable for future use
v1.0: basic Moulinette approved version

## Overview
This repository contains my personal C library, "Libft", developed as part of the 42 school curriculum. The project involves reimplementing a variety of standard C library functions, as well as creating additional utility functions. This library serves as a foundational toolkit for subsequent projects within the curriculum and demonstrates my understanding of C programming fundamentals.

## Features
 
The library includes implementations of the following types of functions:
*   **Character Handling**: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
*   **Memory Manipulation**: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
*   **String Manipulation**: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_strmapi`, `ft_striteri`, `ft_split`
*   **Conversion**: `ft_atoi`, `ft_itoa`
*   **Output (File Descriptor)** : `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

## Compilation

To compile the library, simply navigate to the root directory of this repository and run:

```bash
make
```

This will create `libft.a`, a static library archive.

## Usage

To test this Libft in a project, or with the main.c file provided in this repo, it must be compiled as such:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

and then, executed with:

```bash
./my_program
```

## Evolution and Future Plans

This repository also serves as an evolving personal archive. While this version represents the foundational `Libft`, future updates are planned to expand its functionality, including (but not limited to):
*   Advanced string and memory utilities
*   Integration of `ft_printf`
*   Implementation of `get_next_line` (gnl)
*   Data structures (e.g., linked lists)


