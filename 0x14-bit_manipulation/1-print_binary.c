#include "main.h"

/**
 * print_binary -  binary => decimal
 * @n: deci
 */
void print_binary(unsigned long int n)
{
	int i, cnt = 0;
	unsigned long int crt;

	for (i = 63; i >= 0; i--)
	{
		crt = n >> i;

		if (crt & 1)
		{
			_putchar('1');
			cnt++;
		}
		else if (cnt)
			_putchar('0');
	}
	if (!cnt)
		_putchar('0');
}
