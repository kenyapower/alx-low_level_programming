#include "main.h"

/**
 * _strcat - function concatenates two strings
 * @dest: is an input string
 * @src: is an input string
 *
 * return: A pointer of resultant
 */

char *_strcat(char *dest,char *src)
{
	char *lot = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';

	return (temp);
}
