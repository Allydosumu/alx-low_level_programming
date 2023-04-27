#include "main.h"

/**
 * print_diagonal - This function draws a diagona line
 * on the terminal
 *
 * @n: number of times the character \ should be printed
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int l = 0;
	int s;

	if (n > 0)
	{
		while (l < n)
		{
			for (s = 0; s < l; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			l++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
