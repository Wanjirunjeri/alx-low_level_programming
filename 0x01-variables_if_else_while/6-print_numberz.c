#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		putchar(48 + num);
		num++;
	}
	putchar('\n');
	return (0);
}
