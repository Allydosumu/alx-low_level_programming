#include "main.h"

/**
 * print_numbers - This program prints the numbers
 * from 0 to 9, followed by a new line
 *
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	char a;

	for (a = 0; a >= 9; a++)
	{
		_putchar(a + '0');
		_putchar('\n');
	}
}
