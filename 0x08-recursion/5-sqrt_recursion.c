#include "main.h"
/**
 * sqr - returns the natural square root of n
 * @n: input
 * @a: iterator
 * Return: square root if it exist, -1 if not
 */
int sqr(int n, int a)
{
	if (a % (n / a) == 0)
	{
		if (a * (n / a) == n)
			return (a);
		else
			return (-1);
	}
	return (0 + sqr(n, a + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root or -1 if it not exist
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (sqr(n, 2));
}
