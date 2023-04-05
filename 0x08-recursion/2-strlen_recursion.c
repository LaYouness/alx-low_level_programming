#include "main.h"
/**
 *_strlen_recursion - calculate len
 *@s: string
 *Return: returns len
 */
int _strlen_recursion(char *s)
{
int i = 0;

if (*s)
{
i++;
i = _strlen_recursion(s + 1) + 1;
}
return (i);
}
