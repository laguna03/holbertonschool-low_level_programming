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
new = malloc(sizeof(list_t));

if (!new)
{
return (NULL);
}
if (new != NULL)
{
new->str = strdup(str);
new->len = strlen(str);
new->next = (*head);
(*head) = new;
}
return (*head);
}
