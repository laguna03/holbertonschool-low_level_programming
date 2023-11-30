#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - number of elements on list
 * @h: head node
 * Return: count
 */

size_t list_len(const list_t *h)
{
size_t count = 0;
const list_t *p = h;

while (p != NULL)
{
p = p->next;
count++;
}
return (count);
}
