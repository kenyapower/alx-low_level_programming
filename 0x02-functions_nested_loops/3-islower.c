#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Desc - function that checks for lowercase character
 *
 * Result: Always 0 (Success)
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
