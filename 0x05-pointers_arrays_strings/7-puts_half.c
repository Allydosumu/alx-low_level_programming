#include "main.h"

/**
 * puts_half - This program writes a function that prints
 * half of a string
 *
 * @str: string to be printed
 * Return: 0
 */
void puts_half(char *str)
{
	int l, m;

	l = 0;
	m = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	if (l % 2 == 0)
	{
		m = l / 2;
	}
	else
	{
		m = (l - 1) / 2;
		m = m + 1;
	}
	l = l - 1;
	while (m <= l)
	{
		_putchar(str[m]);
		m++;
	}
	_putchar('\n');
}
