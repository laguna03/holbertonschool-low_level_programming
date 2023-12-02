#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - add node to end of list
 * @head: head node
 * @str: string
 * Return: address or NULL
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *p;

new = malloc(sizeof(list_t));
p = (*head);

if (!new)
{
return (NULL);
}

new->str = strdup(str);
new->len = strlen(str);
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (*head);
}
while (p != NULL && p->next != NULL)
{
p = p->next;
}
p->next = new;
return (new);
}
