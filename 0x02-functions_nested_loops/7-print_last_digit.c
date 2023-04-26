#include "main.h"

/**
 * print_last_digit - This program writes a function
 * that prints the last digit of a number
 *
 * @l: l is an integer
 *
 * Return: 0
 */
int print_last_digit(int l)
{
	int last = l % 10;

	if (l < 0)
		last = last * -1;

	_putchar(last + '0');

	return (last);
}
