#include "lists.h"
/**
 * dlistint_len - len of a list
 * @h: head of list
 * Return: len
 */
size_t dlistint_len(const dlistint_t *h)
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
i++;
travel = travel->next;
}
return (i);
}
