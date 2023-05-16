#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - This progrem writes a function that
 * returns a pointer to a 2-dimensional array of
 * integers with each element initalized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **two_Dim;
	int ht_i, wid_i;

	if (width <= 0 || height <= 0)
		return (NULL);

	two_Dim = malloc(sizeof(int *) * height);

	if (two_Dim == NULL)
		return (NULL);

	for (ht_i = 0; ht_i < height; ht_i++)
	{
		two_Dim[ht_i] = malloc(sizeof(int) * width);

		if (two_Dim[ht_i] == NULL)
		{
			for (; ht_i >= 0; ht_i--)
				free(two_Dim[ht_i]);

			free(two_Dim);
			return (NULL);
		}
	}

	for (ht_i = 0; ht_i < height; ht_i++)
	{
		for (wid_i = 0; wid_i < width; wid_i++)
			two_Dim[ht_i][wid_i] = 0;
	}

	return (two_Dim);
}
