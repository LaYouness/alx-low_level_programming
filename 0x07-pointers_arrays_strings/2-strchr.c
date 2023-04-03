#include "main.h"
#include <stddef.h>
/**
 *_strchr - find a char in a string
 *@s: string
 *@c: char we are searching for
 *Return: Returns the str when c found
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return ((char *) s);
}
s++;
}
return (NULL);
}
