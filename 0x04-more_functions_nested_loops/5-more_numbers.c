#include "main.h"
/**
 * more_numbers - print from 0 to 14
 */
void more_numbers(void)
{
int i, j, k;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
_putchar(j + 48);
}
for (k = 0; k < 5; k++)
{
_putchar('1');
_putchar(k + 48);
}
_putchar('\n');
}
}
