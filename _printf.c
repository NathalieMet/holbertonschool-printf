#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

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


	displayCharacter_t tableau_selection[] = {
		{"s", print_funct_string},
		{"c", print_funct_char},
		{"d", print_funct_int},
		{"i", print_funct_int}

	};


	va_start(prints_type, format);

	while (format != NULL && format[j] != '\0')
	{

		if (format[j] == "%")
			if (format[j] + 1 == "%")
			{
				_putchar(format[j]);
			}
			else
			{
				i = 0;

				while (i < 4)
				{
					if (format[j] == *(tableau_selection[i].specifierCharacter))
					{
						tableau_selection[i].f(prints_type);
					}
					i++;
				}
			}
		else
		{
			_putchar(format[j]);
		}

		j++;
	}

	va_end(prints_type);
	_putchar("\n");

}
