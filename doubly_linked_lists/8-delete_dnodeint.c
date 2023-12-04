#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a new node at a given position
 *
 * @head: pointer to list_t
 * @index:  is the index of the node
 *
 * Return: nth node of a listint_t linked list
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *aft;
	unsigned int i = 0;

	if (!head || !(*head) || (index != 0 && !(*head)->next))
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		aft = tmp->next;
		if (aft)
			aft->prev = NULL;
		*head = aft;
		free(tmp);
		return (1);
	}
	while (tmp && i < (index - 1))
	{
		tmp = tmp->next;
		i++;
	}
	if (!tmp || !tmp->next)
		return (-1);

	aft = tmp->next->next;
	free(tmp->next);
	tmp->next = aft;
	if (aft)
		aft->prev = tmp;
	return (1);
}
