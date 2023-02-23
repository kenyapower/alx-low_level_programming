#include "main.h"

/**
 * largest number - returns greatest of 3 number
 * @a: first integer
 * @b: second integer
 * @c: third integer
 *
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	
		largest = a;
	
	if (b > a && b > c)
	
		largest = b;
	
	if (c > a && c > b)
	
		largest = c;

	return (largest);
}
