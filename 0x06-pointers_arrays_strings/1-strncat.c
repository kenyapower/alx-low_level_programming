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
	int srclen = 0, i = 0;
	char *lot = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > srclen)
		n = srclen;

	src = start;

		for (i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (lot);
}
