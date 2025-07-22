# Libft

This project is designed to help you reimplement basic library functions in the C programming language from scratch. Inside the `libft` folder, you will find your own implementations of various functions for string, memory, and character operations.

## Contents

The library includes the following functions and more:

- Character Check Functions:
  - `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- String Functions:
  - `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_strlcpy`, `ft_strlcat`, `ft_strjoin`, `ft_strtrim`, `ft_substr`, `ft_split`, `ft_strmapi`, `ft_striteri`
- Memory Functions:
  - `ft_memset`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`, `ft_bzero`
- Conversion Functions:
  - `ft_atoi`, `ft_itoa`, `ft_tolower`, `ft_toupper`
- Output Functions:
  - `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

## Installation

After cloning the project, navigate to the `libft` directory and run the following command to build the static library:

```sh
make
```

You can then use the generated `libft.a` file in your own projects.

## Usage

In your own project, include the header as follows:

```c
#include "libft.h"
```

And don't forget to link the `libft.a` file when compiling.

## File Structure

- [libft/](libft/)  
  All source files and the header file (`libft.h`) are located here.

## Contribution

If you would like to contribute, please open an issue first or send a pull request directly.

## License

This project is prepared for educational purposes as part of the 42
