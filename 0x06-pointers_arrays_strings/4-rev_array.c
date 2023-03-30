#include "main.h"
/**
 * reverse_array - reverses array
 * @a: array
 * @n: size
 */
void reverse_array(int *a, int n)
{
int j = n - 1, i = 0;
char t;

while (i < n / 2)
{
t = a[i];
a[i] = a[j];
a[j] = t;
i++;
j--;
}
}
