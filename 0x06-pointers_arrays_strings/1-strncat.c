#include "main.h"

/**
 * _strncat - function concat two string
 * @dest: is an input string
 * @src: is an input string
 * @n: is an input integer
 * Return: a pointer to resultant string
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
