#include "main.h"
#include <stdlib.h>
/**
 *_strdup - copy str
 *@str: input
 *Return: pointer to new str
 *
 */
char *_strdup(char *str)
{
int i = 0, j = 0, k = 0;
char *p;

if (str == NULL)
{
return (NULL);
}
else
{
while (str[i] != '\0')
{
i++;
}
p = (char *)malloc(sizeof(char) * i);
for (j = 0; j < i; j++)
{
p[j] = str[k];
	k++;
}
return (p);
}
return (NULL);
}
