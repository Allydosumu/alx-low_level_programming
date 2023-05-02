#include "main.h"
/**
 * swap_int -This program writes a function that swaps
 * the values of two integers.
 *
 * @a: integer 1
 * @b: integer 2
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int l;

	l = *a;
	*a = *b;
	*b = l;
}
