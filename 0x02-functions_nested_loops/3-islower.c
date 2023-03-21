#include "main.h"

/**
 * _islower - Entry point
 * @c: Description of c
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	_putchar(49);
	}
	else
	{
	_putchar(48);
	}
	return (0);
}
