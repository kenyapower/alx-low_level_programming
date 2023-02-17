#include <stdio.h>

/**
 * main - Start point of program
 * Description - program that prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i, e, q;

	e = 'e';
	q = 'q';

	
	while (i = 'a'; i <= 'z'; i++)
	{
		if (i != e && i != q)
			putchar(i);
	}
	putchar('\n');

	return (0);
}
