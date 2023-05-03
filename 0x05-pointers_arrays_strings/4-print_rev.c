#include "main.h"

/**
 * print_rev - This program writes a function that prints
 * a string in reverse followed by a new line
 *
 * @s: String to be printed
 * Return: 0
 */
void print_rev(char *s)
{
	int l;
	int raise = 0;

	while (s[raise] != '\0')
	{
		raise++;
	}
	for (l = raise - 1; l >= 0; l--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}
