#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _realloc - This program writes a function that
 * reallocates a memory block using malloc and free
 *
 * @ptr: Pointer to the previously allocated memory
 * @old_size: Size in bytes of allocated space
 * @new_size: Size in bytes for new memory
 *
 * Return: NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *space;
	char *ptr_c, *fill;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		space = malloc(new_size);

		if (space == NULL)
			return (NULL);

		return (space);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_c = ptr;
	space = malloc(sizeof(*ptr_c) * new_size);

	if (space == NULL)
	{
		free(ptr);
		return (NULL);
	}

	fill = space;

	for (index = 0; index < old_size && index < new_size; index++)
		fill[index] = *ptr_c++;

	free(ptr);
	return (space);
}
