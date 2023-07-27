#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
/**
 * struct displayCharacter - struct for display specifier character
 *
 *
 * @specifierCharacter: character for
 * @f: function for display
 * On error, -1 is returned, and errno is set appropriately.
 */

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
