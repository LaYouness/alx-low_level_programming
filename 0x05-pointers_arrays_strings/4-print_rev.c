#include "main.h"
/**
 * print_rev - print a string rev
 * @s: string
 */
void print_rev(char *s)
{
char a;
int i = 0;

while (a != '\0')
{
a = s[i];
i++;
}
while (i >= 0)
{
_putchar(s[i - 1]);
i--;
}
_putchar('\n');
}
