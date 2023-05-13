#include "main.h"

/**
 * _isdigit - This program writes a function that
 * checks for digit (0 through 9)
 *
 * @c: digit to be checked for
 *
 * Return: 1 if c is a digit, 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
