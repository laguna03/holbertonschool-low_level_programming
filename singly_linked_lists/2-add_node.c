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
list_t *new;
new = malloc(sizeof(list_t));
if (!new)
{
return (NULL);
}

new->str = (char *) str;
new->next = NULL;

if (*head == NULL)
{
*head = new;
}
else
{

}
return (new);
}
