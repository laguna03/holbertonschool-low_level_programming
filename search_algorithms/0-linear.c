#include "search_algos.h"


/**
 * linear_search - preform a linear search
 * @array: pointer to the array
 * @size: size of the array
 * @value: data to be compared
 * Return: index value whre data is found
 */


int linear_search(int *array, size_t size, int value)
{
	/*declarations*/
	unsigned long int i = 0;
	/*Verifying Input Data*/
	if (array == NULL)
		return (-1);
	/*Move in the array*/
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] != value)
			continue;
		else
			return (i);
	} /*end search for*/
	return (-1);
} /*end linear search*/
