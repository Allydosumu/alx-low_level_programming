#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - This program writes a function that
 * prints the sum of two diagonals of a square matrix
 * of integers.
 * @a: The matrix of integers
 * @size: Size of the matrix
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int l, sum1 = 0, sum2 = 0;

	for (l = 0; l < (size * size); l++)
	{
		if (l % (size + 1) == 0)
			sum1 += a[l];
		if (l % (size - 1) == 0 && l != 0 && l < size * size - 1)
			sum2 += a[l];
	}
	printf("%d, %d\n", sum1, sum2);
}
