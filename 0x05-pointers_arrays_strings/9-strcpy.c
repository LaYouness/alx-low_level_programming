#include "main.h"
/**
 * *_strcpy - cpy str
 * @dest: destination
 * @src: source
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i + 1] = '\0';
return (dest);
}
