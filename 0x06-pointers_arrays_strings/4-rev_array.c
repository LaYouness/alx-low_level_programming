#include "main.h"
/**
 * reverse_array - reverses array
 * @a: array
 * @n: size
 */
void reverse_array(int *a, int n)
{
int i = 0;
char t;

while (i < n / 2)
{
if (n == 0)
{
break;
}
t = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = t;
i++;
}
}
