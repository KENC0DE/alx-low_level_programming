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
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);

	for (k = 0; k < height; k++)
	{
		ptr[k] = malloc(sizeof(int) * width);
		if (ptr[k] == NULL)
		{
			for (i = 0; i < k; i++)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
