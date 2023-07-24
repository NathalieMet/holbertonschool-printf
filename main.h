#ifndef MAIN_H
#define MAIN_H

//structure

/**
 * struct - struct for display specifier character
 *
 *
 * @specifierCharacter: character for
 * @f: function for display
 * On error, -1 is returned, and errno is set appropriately.
 */

typedef struct displayCharacter{
	char *specifierCharacter
	void (*f)();
}displayCharacter_t;

// prototype

int _printf(const char *format, ...);

#endif /* MAIN_H */
