#include "main.h"
#include <stdlib.h>

/**
 * create_array - fuction to allocate memory.
 * @c: is an input character, type int.
 *
 * Return: NULL if size is 0.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x = 0;
	char *y;

	y = malloc(size * sizeof(char));

	if (y == NULL)
		return (NULL);
	
	if (size == 0)
		return (NULL);
	
	while (x < size)
	{
		y[x] = c;
		x++;
	}
	return (y);
}
