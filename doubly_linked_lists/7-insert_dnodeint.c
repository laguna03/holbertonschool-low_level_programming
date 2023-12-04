#include "lists.h"
/**
* insert_dnodeint_at_index - insert a new node in a given position
* @h: head
* @idx: unsigned int
* @n: int
* Return: *head
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *newelement, *pr;
	unsigned int i = 0;

	pr = *h;
	newelement = malloc(sizeof(dlistint_t));
	if (newelement == NULL)
	{
		free(newelement);
		return (NULL);
	}
	newelement->n = n;
	if (*h == NULL)
	{
		*h = newelement;
		newelement->next = newelement->prev = NULL;
		return (newelement);
	} else if (idx == 0)
	{
		add_dnodeint(h, n);
		return (newelement);
	}
	while ((pr->next != NULL) && (i + 1 != idx))
	{
		pr = pr->next;
		i++;
	}
	if ((pr->next == NULL) && (idx > i + 1))
	{
		return (NULL);
	} else if (pr->next == NULL)
	{
		add_dnodeint_end(h, n);
		return (newelement);
	}
	newelement->next = pr->next;
	newelement->prev = pr->next->prev;
	pr->next->prev = newelement;
	pr->next = newelement;

	return (newelement);
}
