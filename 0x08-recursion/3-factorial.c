#include "main.h"
/**
 *factorial - calculate factorial of a num
 *@n: input
 *Return: factorial of n
 */
int factorial(int n)
{
if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
n = n *factorial(n - 1);
}
return (n);
}
