#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - creates an array
 *@size: size of array
 *@c: char ini
 *Return: array
 */
char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i;

if (size == 0)
{
return (NULL);
}
else
{
p = (char*)malloc(sizeof(char) * size);
for (i = 0; i < size; i++)
{
p[i] = c;
}
return (p);
}
}
