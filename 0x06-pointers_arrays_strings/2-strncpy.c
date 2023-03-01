#include "main.h"

/**
 * _strncpy - function that copys a string
 * @dest: is an input string
 * @src: is an input string
 * @n: input integer
 * Return: pointer of resultant
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
