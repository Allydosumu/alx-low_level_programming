#include <stdio.h>
#include "main.h"

/**
 * print_array - This program writes a function that prints
 * n elements of an array of integers
 * @a: Array of integers
 * @n: Size of Array to be printed
 *
 * Return: 0.
 */
void print_array(int *a, int n)
{
	int l;

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	for (l = 0; l < n; l++)
	{
		if (l != n - 1)
			printf("%d ", a[l]);
		else
			printf("%d\n", a[l]);
	}
}
