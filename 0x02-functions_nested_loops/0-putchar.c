#include "main.h"

/**
 * main - Entry Point
 * Description - program that prints _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char k[] = "_putchar";

	for (k = '0'; k < '9'; k++)
	{
		_putchar(k);
	}

		_putchar('\n');

	return (0);
}
