#include "lists.h"
/**
 * print_dlistint - print all elements of list
 * dlistint_t: list
 * Return: num of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *travel = NULL;

	travel = h;
	while (travel != NULL)
	{
	if (travel == NULL)
	{
	return (0);
	}
	printf("%d\n", travel->n);
	travel = travel->next;
	i++;
	}
	return (i);
}
