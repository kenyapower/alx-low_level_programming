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

	while (n > 0 && n < 15)
	{
		for (i = '0'; i <= n; i++)
		{
			_putchar('0');

			for (x = 1; x <= n; x++)

				putformat(i * x);
				_putchar('\n');
		}
	}
}

/**
 * putformat - characters to output
 * @n: number to format
 * Return: nothing
 */
void putformat(int n)
{
	if (n <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}
	else if (n > 9 && n <= 99)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(n / 100 + '0');
		_putchar(n / 10 % 10 + '0');
		_putchar(n % 10 + '0');
	}
}

