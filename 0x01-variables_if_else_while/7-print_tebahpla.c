#include <stdio.h>
/**
 * main - main block
 * Description: Printing the alphabet in reverse order in lowercase.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
		putchar('\n');

	return (0);
}
