#include "main.h"

/**
 * times_table - 9 times table
 *
 */
void times_table(void)
{
int i, j, m, m1, m2;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
m = i * j;
m2 = m % 10;
m1 = m / 10;
_putchar(m1 + 48);
_putchar(m2 + 48);
if (j == 9)
{
continue;
}
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar('\n');
}
}
