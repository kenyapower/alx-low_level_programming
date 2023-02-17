#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - assign a random number to the variable n each time it is executed
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d if positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d its negative\n", n);
	return (0);
}
