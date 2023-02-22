#include "main.h"

/**
 * print_times_table - print times table  n > 0 && n < 15
 * desc - prints the n times table, starting with 0
 * @n: is an input value (int)
 *
 * Return: always 0 (success)
 */

void print_times_table(int n)
{
	int i, x;

	while (n > '0' && n < '15')
	{
		for (i = '0'; i <= n; i++)
		{
			_putchar('0');

			for (x = 1, x <= n; x++)

				putformat(i * x);
				_putchar('\n');
		}
	}
}

