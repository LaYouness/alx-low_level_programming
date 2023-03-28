#include "main.h"
/**
 * rev_string - reverse str
 * @s: string
 */
void rev_string(char *s)
{
int i, k, j, l;
char c, t;

for (i = 0; c != '\0'; i++)
{
c = s[i];
}
k = i - 1;
l = k - 1;
for (j = 0; j < k / 2; j++)
{
t = s[j];
s[j] = s[l];
s[l--] = t;
}
}
