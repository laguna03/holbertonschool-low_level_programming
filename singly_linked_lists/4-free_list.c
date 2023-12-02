#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list -function to free memory in a linked list
 * @head: head node
 * Return: nothing.
 */

void free_list(list_t *head)
{
list_t *new;

while (head != NULL)
{
new = head->next;
free(head);
head = new;
}
}
