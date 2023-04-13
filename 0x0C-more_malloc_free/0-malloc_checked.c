#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - allocate memo
 *@b: size
 *Return: ptr to alloc memo
 */
void *malloc_checked(unsigned int b)
{
void *p;

	p = malloc(b);
if (p == NULL)
{
	exit(98);
}
return (p);
}
