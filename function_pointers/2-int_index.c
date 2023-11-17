#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * int_index - int index fun
 * @array: array
 * @size: size
 * @cmp: fun to compare
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != 0 && cmp != 0)
	{
		for (i = 0; size > i; i++)
		{
		if (cmp(array[i]))
		return (i);
		}
	}
return (-1);
}
