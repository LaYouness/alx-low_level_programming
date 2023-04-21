#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - add args
 *@n: first arg
 *Return: sum
 *@...: A variable number of paramters
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i, s = 0;

va_start(ap, n);
for (i = 0; i < n; i++)
s = s + va_arg(ap, int);
va_end(ap);
return (s);
}
