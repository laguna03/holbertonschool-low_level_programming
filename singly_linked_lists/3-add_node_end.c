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
list_t *new = malloc(sizeof(list_t));

if (!new)
{
return (NULL);
}

new->str = strdup(str);
new->next = NULL;

return (*head);
}
