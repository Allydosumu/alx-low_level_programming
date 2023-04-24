#include <stdio.h>

/**
 * main - Entry point
 * Description: This program prints all possible combination
 * of two two digit numbers.
 *
 * Return: 0
 */

int main(void)
{
	int a, b;
	int l, m, n, o;

	for (a = 0; a < 100; a++)
	{
		l = a / 10; /* double digits for first combination */
		m = a % 10; /* single digits for first combination */

		for (b = 0; b < 100; b++)
		{
			n = b / 10; /* double digits for second combination */
			o = b % 10; /* single digits for second combination */

			if (l < n || (l == n && m < o))
			{
				putchar(l + '0');
				putchar(m + '0');
				putchar(32);
				putchar(n + '0');
				putchar(o + '0');

				if (!(l == 9 && m == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);

	return (0);
}
