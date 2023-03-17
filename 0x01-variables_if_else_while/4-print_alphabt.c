#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char chr = 'a';

	while (chr <= 'z')
	{
	if (chr == 'e' || chr == 'q')
	{
	chr++;
	continue;
	}
	putchar(chr);
	chr++;
	}
	putchar('\n');
	return (0);
}
