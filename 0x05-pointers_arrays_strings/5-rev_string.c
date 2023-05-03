#include "main.h"

/**
 * rev_string - This program writes a function
 * that reverses a string
 * @s: String to be reversed
 *
 * Return: 0
 */
void rev_string(char *s)
{
	int m, n, o;
	char c;

	m = 0;
	n = 0;

	while (s[m] != '\0')
	{
		m++;
	}

	o = m / 2;
	m = m - 1;
	while (m >= o)
	{
		c = s[n];
		s[n] = s[m];
		s[m] = c;
		m--;
		n++;
	}
}
