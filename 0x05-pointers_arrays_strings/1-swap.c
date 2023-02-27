#include "main.h"

/**
 * swap_int - function that swaps values of 2 integers
 * @a: int 1
 * @b: int 2
 * return: nothing.
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
