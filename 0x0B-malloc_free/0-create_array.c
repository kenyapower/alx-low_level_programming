#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: The size of the array
 * @c: A character to initialized the array
 * Return: Apointer to the array or NULL if it fails
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
