#include "main.h"
/**
 * _strncat - appends the src string to the dest string
 * @dest: destination
 * @src: source
 * @n: num of bytes
 * Return: returns the full string
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;

while (dest[i] != '\0')
{
i++;
}
while (j < n)
{
dest[i] = src[j];
i++;
j++;
}
return (dest);
}
