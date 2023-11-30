#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_node - new node
 * @head: head node
 * @str: string to duplicate
 * Return: Null or address of element
 */

list_t *add_node(list_t **head, char *str)
{
char *new;
int i = 0;
list_t *tmp;

if (!(*head))
{
*head = malloc(sizeof(list_t));
(*head)->next = NULL;
}
else
while ((*head)->next != NULL)
{
    i++;
    (*head) = (*head)->next;
    }
    new = strdup(str);
    tmp = malloc(sizeof(list_t));
    if (tmp == NULL || new == NULL)
    return (NULL);

    else
    {
        tmp->str = new;
        tmp->next = NULL;
        (*head)->next = tmp;
        (*head) = (*head)->next;
        }
        return (*head);
}