#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *array_iterator - exec a fnc on evry element of an array
 *@array: array
 *@size: size of array
 *@action: func
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

for (i = 0; i < size; i++)
{
action(array[i]);
}
}
