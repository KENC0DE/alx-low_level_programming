#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **ptr = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **)malloc(width * sizeof(int *));
	for (k = 0; k < width; k++)
		ptr[k] = (int *)malloc(height * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			ptr[i][j] = 0;
		}
	}

	return (ptr);
}
