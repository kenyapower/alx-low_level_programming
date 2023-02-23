#include "main.h"

/**
 * largest number - return greatest of 3 number
 * @a: first int
 * @b: second int
 * @c: third int
 *
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
