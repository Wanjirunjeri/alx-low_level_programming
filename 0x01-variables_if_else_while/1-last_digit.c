#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int n;
	int rem;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	rem = n % 10;
	if (rem > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, rem);
	else if (rem == 0)
		printf("Last digit of %d is %d and is 0\n", n, rem);
	else if (rem < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, rem);
	return (0);
}
