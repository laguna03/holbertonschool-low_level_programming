#include "lists.h"

/**
 * add_dnodeint - add new node at begining
 * @n; integer
 * @head: head node
 * Return: & of new element or null
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *p;

p = malloc(sizeof(dlistint_t));

if (!p)
return (NULL);
p->n = n;
p->prev = NULL;
if (*head)
{
(*head)->prev = p;
p->next = *head;
}
else
{
p->next = NULL;
}
*head = p;
return (*head);
}