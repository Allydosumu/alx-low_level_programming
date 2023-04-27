#include "main.h"

/**
 * print_line - This program writes a function that draws
 * a straight line in the terminal.
 *
 * @n: number of times the character _ should be printed
 *
 * Return: 0
 */
void print_line(int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		_putchar('_');
		c++;
	}
	_putchar('\n');
}
