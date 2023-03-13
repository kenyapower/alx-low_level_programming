#include "main.h"
#include <stdlib.h>

/**
 *_strdup - function returns a pointer to a new string which is a duplicate of the string str.
 *@str: input pointer of string
 *Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *x, *y;
	int i = 0;
	int len = 0;

	if (str == NULL)
		return (NULL);

	y = str;

	while (*str)
	{
		len++;
		str++;
	}

	x = malloc(sizeof(char) * (len + 1));
	y = x;

	if (x != NULL)
	{
		for (i = 0; i < len; i++)
		{
			x[i] = *str;
			str++;
		}
		x[0] = '\0';
		return (y);
	}
	else
	{
		return (NULL);
	}
}
