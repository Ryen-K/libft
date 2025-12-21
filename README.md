*This project has been created as part of the 42 curriculum by rkamkoum*

## Description

This repository contains my personal C library, "Libft", developed as part of the 42 school curriculum. The project involves reimplementing a variety of standard C library functions, as well as creating additional utility functions. This library serves as a foundational toolkit for subsequent projects within the curriculum and demonstrates my understanding of C programming fundamentals.

## Features

The library includes implementations of the following types of functions:
*   **Character Handling**: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
*   **Memory Manipulation**: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
*   **String Manipulation**: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_strmapi`, `ft_striteri`, `ft_split`
*   **Conversion**: `ft_atoi`, `ft_itoa`
*   **Output (File Descriptor)** : `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`
*   **Linked List Manipulation (Bonus)**: `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

## Instructions

### Compilation

To compile the library, navigate to the root directory of this repository and run one of the following commands:

*To compile the mandatory part only*
```bash
make
```

*To include the bonus linked list functions*
```bash
make bonus
```

This will create or update `libft.a`, a static library archive containing the chosen functions.

### Usage in a Project

To link the `libft` library with your own project, use the following flags during compilation:
Example with a main.c file
```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

* `-L.` tells the compiler to look for libraries in the current directory.
* `-lft` tells the compiler to link the `libft` library.

## Resources

### Classic References
*   **man pages**: The official Linux manual pages are an invaluable resource for understanding the expected behavior of standard C functions.
*   **various websites & forums**
[learn-c](https://www.learn-c.org/en/Linked_lists)
[stackoverflow](https://www.stackoverflow.com)
[w3schools](https://www.w3schools.com/c/index.php)
[gibbontech](https://www.gibbontech.com/fr/ecole42/libft/index.html)
*   **various youtube videos**: shout out to: 
[oceano](https://www.youtube.com/@onaecO)
[nikito](https://www.youtube.com/@n1kito)

### AI Usage
*   **No AI was used for this project**
The project was started with the old subject file, that encouraged research and struggles over AI use.

#### Version v1.1 (current): Add bonus part (linked lists): ready for re-submission.
#### Version v1.0: Moulinette approved: 100/100
