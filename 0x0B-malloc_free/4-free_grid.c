#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - 2d array frees dimensional
 *
 * @grid: 2d grid
 * @height: grid dimension height
 *
 * Description: grid memory free
 *
 * Return: nothing
 *
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
