#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char chr = 'a';

	for (chr = 'a'; chr <= 'z'; chr++)
	{
	putchar(chr);
	putchar('\n');
	}
	return (0);
}