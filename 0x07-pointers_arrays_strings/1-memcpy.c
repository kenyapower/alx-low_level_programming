#include "main.h"

/**
 * _memcpy - a function to copy memory area
 * @dest: destination to copy
 * @src: source to copy from
 * @n: number of bytes
 * Return: returns pointer to copy location
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start);
}
