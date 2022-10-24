#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char u;
	char l;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);
	for (u = 'A'; u <= 'Z'; u++)
		putchar(u);
	putchar('\n');
	return (0);
}
