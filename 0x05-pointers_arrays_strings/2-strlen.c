#include "main.h"

/**
 * _strlen - fuction to count and return length of string
 * @s: input string
 * Return: nothing
 */

int _strlen(char *s)
{
	int size = 0;

	while (s[size] != '\0')
		size++;
	return (size);
}
