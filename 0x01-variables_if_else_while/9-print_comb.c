#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int b;

	b = 0;
	while (b < 10)
	{
		putchar(48 + b);
		putchar(',');
		putchar(' ');
		b++;
	}
	putchar('\n');
	return (0);
}
