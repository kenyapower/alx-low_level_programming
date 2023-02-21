#include "main.h"

/**
 * main - Entry point
 * _islower - Check for lower characters
 * @c: An input character
 * Description: function uses _putchar function to print
 * Description: function _islower to print lowercase only
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 */

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
