#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - function that prints all elements
 * of a list
 * @list_t: single linked list
 * @h: head node
 * Return: count
*/

size_t print_list(const list_t *h)
{
int count = 0;
const list_t *p = h;

for (; p; p = p->next)
{
if (p->str)
{
printf("[%u] %s", p->len, p->str);
}
else
{
printf("[0] (nil)");
}
count++;
putchar(10);
}
return (count);
}
