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

	for (l = 0; s[l] != '\0'; l++)
	{
		raise++;
	}
	for (l = raise; l >= 0; l--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}
