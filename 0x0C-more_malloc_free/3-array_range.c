#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * array_range - This program writes a function that
 * creates an array of integers
 *
 * @min: minimum value
 * @max: maximum value
 * Return: Pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = min++;

	return (ptr);
}
