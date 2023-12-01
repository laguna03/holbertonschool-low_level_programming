#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - new node
 * @head: head node
 * @str: string to duplicate
 * Return: Null or address of element
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new;
new = malloc(sizeof(list_t));

if (new == NULL)
{
return (NULL);
}

new->str = strdup(str);

if (new->str == NULL)
{
return (NULL);
}
new->next = *head;

*head = (new);

return (new);
}
