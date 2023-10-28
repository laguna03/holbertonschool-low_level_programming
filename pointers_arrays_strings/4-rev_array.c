#include "main.h"
#include <string.h>
/**
 * reverse_array - function that reverses the array of integers
 * @a: Array
 * @n: number of elements in array
 * Return: Always (0)
 */

void reverse_array(int *a, int n)
{
	int i;
	long temp;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
