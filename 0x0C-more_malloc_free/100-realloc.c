#include "main.h"

/**
 * _realloc - re-allocate memeory using malloc and free.
 * @ptr: addres to be resized memory
 * @old_size: old memory size
 * @new_size: the new memory size.
 * Return: the resized memory size.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (old_size == new_size)
		return (ptr);
	else if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
		free(ptr);

	ptr = malloc(new_size);
	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
