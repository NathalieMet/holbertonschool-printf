#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
/**
 * _printf - Write function that produces output according to
 * format.
 * @format: The character to print
 *
 * Return: On success 1.
 *
 */
int _printf(const char *format, ...)
{
	va_list prints_type;
	int i;
	int j = 0;
	int count_length = 0;
	displayCharacter_t selection[] = {
		{"s", print_string}, {"c", print_char},
	{"d", print_int}, {"i", print_int}};
	va_start(prints_type, format);
	if (format == NULL)
		return (-1);
	while (format != NULL && format[j] != '\0')
	{
		if (format[j] == '%')
		{
			if (format[j + 1] == '%')
			{   count_length += _putchar(format[j + 1]);
				j += 2; }
			else if (format[j + 1] == '\0')
			{ return (-1); }
			else
			{ i = 0;
				while (i < 4)
				{
					if (format[j + 1] == selection[i].specifierCharacter[0])
					{ count_length += selection[i].f(prints_type);
						j += 2;
						break; }
					i++;
				}
				if (i == 4)
				{
					count_length += _putchar('%');
					j++;
				}}}
		else
		{ count_length += _putchar(format[j]);
			j++; }
	}
	va_end(prints_type);
	return (count_length); }
