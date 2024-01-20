#include "search_algos.h"
/**
 *binary_search - prefor the binary search algo
 *@array: pointer to array
 *@size: array size
 *@value: data we are looking for
 *Return: index
 */
int binary_search(int *array, size_t size, int value)
{
	/*Declarations*/
	int left = 0, right = size - 1, i;
	int middle;
	/*Move in array*/
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == right)
				printf("%d", array[i]);
			else
				printf("%d, ", array[i]);
		}
		printf("\n");
		middle = left + (right - left) / 2;
		if (array[middle] == value)
			return (middle);
		if (array[middle] < value)
			left = middle + 1;
		else
			right = middle - 1;
	}
	return (-1);
} /*end binary search*/
