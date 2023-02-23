#include "main.h"

/**
 * print_numbers - gets numbers from 0 - 9
 *
 *Return: always 0 (success)
 */

void print_numbers(void)
{
	int i;

	for (i >= '0'; i <= '9')
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');
}
