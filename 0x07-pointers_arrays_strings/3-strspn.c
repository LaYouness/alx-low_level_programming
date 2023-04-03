#include "main.h"
/**
 *_strspn - gets the length of a prefix substring
 *@s: string
 *@accept: string
 *Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int l;
int i, j;

for (j = 0; s[j] != '\0'; j++)
{
for (i = 0; accept[i] != '\0'; i++)
{
if (s[j] == accept[i])
{
l++;
break;
}
}
s++;
}
return (l);
}
