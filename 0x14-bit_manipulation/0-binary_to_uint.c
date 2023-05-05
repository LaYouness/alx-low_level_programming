#include "main.h"

/**
 * binary_to_uint - binary number =>  unsigned int
 * @b: binary number as str
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int d_v = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		d_v = 2 * d_v + (b[i] - '0');
	}

	return (d_v);
}
