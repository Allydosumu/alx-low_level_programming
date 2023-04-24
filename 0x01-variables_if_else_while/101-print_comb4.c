#include <stdio.h>

/**
 * main - Entry point
 * Description: This program prints all possible 
 * different combinations of three digits.
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int l, m, n, o;

	for (l = 0; l < 1000; l++)
	{
		m = l / 100; /* for three digits */
		n = (l / 10) % 10; /* for two digits */
		o = l % 10; /* for single digit */

		if (m < n && n < o)
		{
			putchar(m + '0');
			putchar(n + '0');
			putchar(o + '0');

		if (l < 700)
		{
			putchar(44);
			putchar(32);
		}
		}
	}
	putchar('\n');
	return (0);
}
