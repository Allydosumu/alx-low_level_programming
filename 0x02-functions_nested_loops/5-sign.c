#include "main.h"

/**
 * print_sign - This program writes a function
 * that prints the sign of  number
 *
 *@n: number to check
 *
 * Return: 1 and prints + if n is greater than
 * zero, 0 if n is zero, negative if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
