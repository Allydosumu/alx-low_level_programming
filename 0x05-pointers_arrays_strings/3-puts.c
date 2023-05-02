#include "main.h"
/**
 * _puts - This program writes a function that prints
 * a new line to stdout.
 *
 * @str: char array string type
 *
 * Return: 0
 */
void _puts(cha *str)
{
	int l;

	for (l = 0; str[l] != '\0'; l++)
	{
		_putchar(str[l]);
	}
	_putchar('\n');
]
