#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char chr = 'a', CHR = 'A';

	for (chr = 'a'; chr <= 'z'; chr++)
	{
	putchar(chr);
	}
	for (CHR = 'A'; CHR <= 'Z'; CHR++)
	{
	putchar(CHR);
	}
	putchar('\n');
	return (0);
}
