#include "main.h"

/**
 * get_bit - give  value of bit at index in n
 * @n: number to search
 * @index: index to bit
 * Return: int val of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitv;

	if (index > 63)
		return (-1);

	bitv = (n >> index) & 1;

	return (bitv);
}
