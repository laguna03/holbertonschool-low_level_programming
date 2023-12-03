#include "lists.h"

/**
 * dlistint_len - number of elemnts in a dlinked list
 * @h: head node
 * Return: count
*/

size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;

if (h == NULL)
{
return (count);
}

while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
