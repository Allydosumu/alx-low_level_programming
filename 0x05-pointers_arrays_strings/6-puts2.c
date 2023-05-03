#include "main.h"

/**
 * puts2 - This program writes a function that prints
 * every other character of a string, starting with
 * the firtst charactee
 * @str: string to be printed
 * Return: 0
 */
void puts2(char *str)
{
	int l, m;

	l = 0;
	m = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	while (m < l)
	{
		if (m % 2 == 0)
		{
			_putchar(str[m]);
		}
		m++;
	}
	_putchar('\n');
}
