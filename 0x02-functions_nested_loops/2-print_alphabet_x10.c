#include "main.h"

/**
 * print_alphabet_x10 - checks main
 * Desc - prints 10 times the alphabet in small letters.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i, t;

	while (t = '0'; t < '10'; t++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}

		_putchar('\n');
	}

	return (0);
}
