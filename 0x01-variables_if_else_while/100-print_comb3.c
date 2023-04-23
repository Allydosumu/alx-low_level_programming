#include <stdio.h>

/**
 * main - Entry point
 * Description: This program prints all possible combinations of two digits.
 * Return: Always (0) Success
 */
int main(void)
{
	int n, m, o;

	n = 0;

	while (n < 100)
	{
		m = n % 10; /* represents single digit */
		o = n / 10; /* represents double digit */

		if (o < m)
		{
			putchar(o + '0');
			putchar(m + '0');

			if (n < 89)
			{
				putchar(44);
				putchar(32);
			}
		}

		n++;
	}
	putchar('\n');

	return (0);
}
