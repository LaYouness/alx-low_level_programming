#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n = '0', chr = 'a';

	while (n <= '9')
	{
	putchar(n);
	n++;
	}
	while (chr <= 'f')
	{
	putchar(chr);
	chr++;
	}
	putchar('\n');
	return (0);
}
