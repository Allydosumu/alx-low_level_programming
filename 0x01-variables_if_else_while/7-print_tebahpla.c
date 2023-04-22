#include <stdio.h>

/**
 * main - Entry point
 * Description: This program prints the lowercase alphabet in reverse.
 *
 * Return: Always (0) Success
 */
int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
