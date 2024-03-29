#include "main.h"

/**
 * alloc_grid - allocate 2-dimenational memeory
 * @width: the width of the momory
 * @height: the height of the memory
 * Return: pointer to newly created memory.
*/
int **alloc_grid(int width, int height)
{
	int **multMem = NULL;
	int idx, frup, iti, siti;

	if (width <= 0 || height <= 0)
		return (NULL);

	multMem = malloc(sizeof(int *) * height);
	if (multMem == NULL)
		return (NULL);
	for (idx = 0; idx < height; idx++)
	{
		multMem[idx] = malloc(sizeof(int) * width);
		if (multMem[idx] == NULL)
		{
			for (frup = 0; frup < idx; frup++)
				free(multMem[frup]);
			free(multMem);
			return (NULL);
		}
	}
	for (iti = 0; iti < height; iti++)
	{
		for (siti = 0; siti < width; siti++)
			multMem[iti][siti] = 0;
	}

	return (multMem);
}
