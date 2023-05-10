#include "main.h"
/**
 * factorial - This program writes a function that
 * returns the factorial of a given number.
 * @n: an integer
 *
 * Return: The factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
		if (n >= 0 && n == 1)
		{
			return (1);
		}
		else
		{
			return (n * factorial(n - 1));
		}
}
