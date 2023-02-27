#include "main.h"

/**
 *print_rev - a function that prints a string in reverse order
 * @s: an input string
 * Return: Nothing
 */

void print_rev(char *s)
{
	int rev = 0;

	while (s[rev] != '\0')
		rev++;

	while (rev)
		_putchar(s[--rev]);

	_putchar('\n');
}
