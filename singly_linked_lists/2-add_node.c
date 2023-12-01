#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_node - new node
 * @head: head node
 * @str: string to duplicate
 * Return: Null or address of element
 */

list_t *add_node(list_t **head, const char *str)
{

list_t *new = malloc(sizeof(list_t));

if (str == NULL)
{
return (NULL);
}

if (new == NULL)
{
return (NULL);
}

new->str = strdup(str);

if (new->str == NULL)
{
free(new);
return (NULL);
}
new->next = *head;

*head = (new);

return (new);
}
