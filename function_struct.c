#include <stdarg.h>
#include "main.h"

/**
 * print_funct_string - prints string
 * @prints_type: The string to print
 *
 * Return: number of characters printed
 * On error, 0 is returned
 */

int print_funct_string(va_list prints_type)

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

/**
 * print_funct_char - prints character
 * @prints_type: The character to print
 *
 * Return: number of characters printed
 * On error, 0 is returned
 */

int print_funct_char (va_list prints_type)
{

	char c = va_arg(prints_type, int);

	_putchar (c);

	return (1);

}

/**
 * print_funct_int - prints integer
 * @prints_type: The character to print
 *
 * Return: number of digits printed
 * On error, 0 is returned
 */

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

	while (num > 0)
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
