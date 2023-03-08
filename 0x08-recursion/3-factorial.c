#include "main.h"

/**
 * factorial - fuction to get factorial of number
 * @n: input integer
 * Return: factorial of number @n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
