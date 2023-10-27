#include "main.h"
#include <stdio.h>
/**
 * print_array - N elements of an array of integers
 * @array:  variable 1
 * @number: variable 2
 * Return: aways 0 (succes)
 */

void print_array(int *array, int number)
{

	int count;

	for (count = 0; count < number; count++)
	{
		if (count == (number - 1))
		{
			printf("%d", array[count]);
		}
					else
					{
					printf("%d, ", array[count]);
					}
	printf("\n");
}
}
