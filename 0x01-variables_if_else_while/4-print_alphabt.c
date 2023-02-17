#include <stdio.h>

/**
 * main - Start point of program
 * Description - program that prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i = 'a';
	char e = 'e';
	char q = 'q';

	while (i <= 'z')
	{
		while (i != 'q' && i != 'e')
			putchar(i);
			i++;
	}
	putchar('\n');

	return (0);
}
