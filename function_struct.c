#include

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_funct_string (va_list prints_type)

{
	char *str = va_arg(args, char*);

	if (str == NULL)
		return (0);

	_putchar(str);
}

void print_funct_char (va_list prints_type)
{

			char c = va_arg(args, int);

			_putchar (c);
}

void print_funct_int(va_list arg)
{
	int num = va_arg(arg, int);
	int i;
	char tableau_store[10];

	if (num == 0)
		return ('0');
	if (num < 0)
	{
		num = -(num);
		putchar ('-');
	}

	while (num > 0)
	{
		tableau_store[i] = num % 10 + '0';
		num /= 10;
		i++;
	}
	while (i > 0)
	{
		_putchar(tableau_store[i] - 1);
		i--;
	}



	/*while (temp != 0)
	{
		count++;
		temp /= 10;
	}
	for (i = count; i > 0; i--) {
		int digit = num / pow(10, i);
		putchar(digit + '0');
		num %= pow(10, i);
	}*/
}
