#include "main.h"

/**
 * _strlen_recursion - a function to return len of string
 * @s: input string
 * Return: Length of string
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}

	return (0);
}
