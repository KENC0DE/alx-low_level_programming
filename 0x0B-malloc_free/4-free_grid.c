#include "main.h"

/**
 * free_grid - frees 2d memory
 * @grid: 2d memeory pointer.
 * @height: the size of pointer in the 2d memory.
 * Return: Nothing.
*/
void free_grid(int **grid, int height)
{
	int frup;

	for (frup = 0; frup < height; frup++)
		free(grid[frup]);
	free(grid);
}
