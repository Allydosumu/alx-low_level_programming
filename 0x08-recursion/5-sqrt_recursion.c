#include "main.h"
/**
 * find_root_number - This program writes a function that
 * finds the square root of a number.
 * @root_number: the test number
 * @n: input
 *
 * Return: natural square root
 */
int find_root_number(int n, int root_number)
{
	if (root_number * root_number > n)
	{
		return (-1);
	}
	else if (root_number * root_number == n)
	{
		return (root_number);
	}
	return (find_root_number(n, root_number + 1));
}

/**
 * _sqrt_recursion - This program writes the function that
 * returns the natural square root of a number
 * @n: input
 *
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	int root_number = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (find_root_number(n, root_number));
	}
}
