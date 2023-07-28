# _printf

#### Prototype : int _printf(const char *format, ...);

FORMAT refers to a string of characters which may include specific symbols followed in some cases by a letter such as '%s', '%c', '%d' to display a variable.

#### Compilation command : gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

This repository contains all the code required for a custom function called _printf(). This is a versioned part of the C-language printf() function in the standard <stdio.h> library. The _printf() function attempts to duplicate exactly the same process as the C printf() function to a lesser extent. This project was carried out as part of Holberton School's learning program.

```c
_printf("My name is %s and I am %d years old", "Benny hill", 123)
```

## Synopsis

The _printf() function takes two arguments: a character pointer to a string: format, and a "list of variable arguments": arg_list. _printf() scans the format string for a conversion specifier, indicated by the "%" symbol. If found, the match_specifier() function scans an array of structures (containing pairs of characters and functions) to find the specifier function that matches the conversion specifier given in the format string, then returns a pointer to this matched function. printf() uses the pointer to this specifier function to call the specifier function on the next queued argument in the arg_list. Each specifier function writes one character at a time according to the value of arg_list.

## Standard functions and Macros

To operate the _printf function, we use different functions:

#include <unistd.h>

 write : used in a '_putchar' function to exploit characters.

#include <stdarg.h>

 va_list : implementing a srtucture;

 va_start : intializing the structure;

 va_arg : using variatic structure arguments;

 va_end : free up the structure's resources.

_putchar
```c
int _putchar(char c)
{
	return (write(1, &c, 1));
}

## Usage
Uses the write function to display a character. This is a customized version of the library''s
putchar function in the library <stdio.h>

```

## Other functions used

#include "main.h"

_putchar
```c
int _putchar(char c)
{
	return (write(1, &c, 1));
}

## Usage
Uses write to display a character.

```

print_funct_string
```c
int print_funct_string(va_list prints_type);
{
	char *str = va_arg(prints_type, char*);
	int count = 0;

	if (str == 0)
		return (0);

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		count++;
	}

	return (count);

}

## Usage
Display a character string from the ASCII table and return the number of characters.

```
print_funct_int
```c
int print_funct_int(va_list prints_type)
{
	int num = va_arg(prints_type, int);
	int i = 0;
	char tableau_store[10];
	int count = 0;

	if (num == 0)
		_putchar('0');
	if (num < 0)
	{
		num = -(num);
		_putchar ('-');
	}

	while (num > 0)//43
	{
		tableau_store[i] = num % 10;
		num /= 10;
		i++;
	}
	while (i > 0)
	{
		_putchar(tableau_store[i - 1] + '0');
		i--;
		count++;


	}
	return (count);
}

## Usage
Render a digital value as an ASCII table character and return the number of digits.

```
print_funct_char
```c
int print_funct_char (va_list prints_type)
{

	char c = va_arg(prints_type, int);

	_putchar (c);

	return (1);

}

## Usage
Display a character from the ASCII table and return 1.

```
All these functions are grouped together in a function_stuct.c file.

## main.h

It contains our structure and the various prototypes required to operate the function.

```c
typedef struct displayCharacter
{
	char *specifierCharacter;
	int (*f)();
} displayCharacter_t;



int _printf(const char *format, ...);
int print_funct_string(va_list prints_type);
int print_funct_char(va_list prints_type);
int print_funct_int(va_list arg);
int _putchar(char c);

#endif /* MAIN_H */
## Usage


```
## Test

To run tests, to check the overall functionality of the program, compile with main.c as the main file:

```c
$ cp holberton-school-printf\main.c
$ gcc *.c
```

## Flowchar

To view the flowchar, consult the flowchar_printf
![image](https://zupimages.net/up/23/30/petl.jpg)
print_string,
![image](https://zupimages.net/up/23/30/9vy5.jpg)
print_char,
![image](https://zupimages.net/up/23/30/46pm.jpg)
and print_int files ;
![image](https://zupimages.net/up/23/30/y3ox.jpg)

## Auteurs

Nathalie Metreau  C21 HolbertonSchool

Gaël Deschamps    C21 HolbertonSchool

Erwan Cremey      C21 HolbertonSchool


