#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a nam
 * @name: name of the person
 * @f: fun
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
