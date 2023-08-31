# FT_Printf
FT_Printf is a project undertaken as part of the 42 school curriculum. It's an attempt to recreate the famous printf function found in the C standard library, a function known for its versatility in handling string formatting. This version is a simplified take on it, named ft_printf.

**Limitations**
Only the mentioned format specifiers are supported.
Flag characters, field width, or precision specifiers are not implemented in this version.
The behavior is undefined if the format string contains any unsupported format specifiers.

**Conclusion**
This project serves as a foundational experience in handling variable arguments, string manipulation, and diving deep into one of the most versatile functions in the C programming language. Though this is a simplified take on the printf function, it covers essential functionalities and provides a solid base for further extensions and improvements.

## Compilation
The library is compiled using the flags -Wall -Wextra -Werror. To compile, run:

``make``

To include the bonus functions, use:

``make bonus``

This will generate a libftprintf.a library.

----

## Implemented Functions

Supports the following format specifiers:
**%d and %i**: Display an integer.
**%c**: Display a character.
**%s**: Display a string.
**%%**: Display a percent sign.
**%u**: Display an unsigned integer.
**%p**: Display a pointer's address.
**%x**: Display an integer in hexadecimal (lowercase).
**%X**: Display an integer in hexadecimal (uppercase).

----

## Usage
Include ft_printf.h at the beginning of your source file:

``#include "ft_printf.h"``

When compiling your project, link the library:

``gcc your_file.c -L. -lftprintf``

Then, you can call the function ft_printf similarly to the standard printf.

**Testing:**

``make test``

Make a standard comparison between printf and ft_printf (display and return value).

----

## Cleanup

**To remove the .o object files**:

``make clean``


**To remove both the object files and the compiled library**:

``make fclean``

**To recompile the library from scratch**:

``make re``

----

## Contribution
If you encounter any bugs or wish to add features, please feel free to open an issue or submit a pull request.
