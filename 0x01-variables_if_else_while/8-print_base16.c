#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Alwyas 0(success)
 */
int main(void)
{
	int a;
	char c;

	a = 0;
	c = 'a';
	while (a < 10)
		putchar(48 + a++);
	while (c <= 'f' && c >= 'a')
		putchar(c++);
	putchar('\n');
	return (0);
}
