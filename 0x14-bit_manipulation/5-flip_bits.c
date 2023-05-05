#include "main.h"

/**
 * flip_bits - count how much bits changed to get from n to m
 * @n: num 1
 * @m: num 2
 * Return: num of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, cnt = 0;
	unsigned long int crt;
	unsigned long int x = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		crt = x >> i;
		if (crt & 1)
			cnt++;
	}

	return (cnt);
}
