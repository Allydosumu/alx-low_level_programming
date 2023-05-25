#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - This function searches for an integer
 * @size: size of the elements in the array
 * @array: the array
 * @cmp: A pointer to the function to be used to compare values
 *
 * Return: -1 if no element matches and size is less than or equal
 * to zero.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
