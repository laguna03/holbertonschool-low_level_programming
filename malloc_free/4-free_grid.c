#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * free_grid - hola
 * @grid: var
 * @height: var
 * Return: freed space
*/
void free_grid(int **grid, int height)
{
int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
free(grid);
}
