#include "lists.h"
/**
 * add_dnodeint_end - add node in the end of list
 * @head: head of list
 * @n: data to new node
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *travel;
dlistint_t *new;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
new->next = NULL;
new->prev = NULL;
new->n = n;
if (*head == NULL)
{
*head = new;
}
else
{
travel = *head;
while (travel->next != NULL)
{
travel = travel->next;
}
new->prev = travel;
new->next = NULL;
new->n = n;
travel->next = new;
}
return (new);
}
