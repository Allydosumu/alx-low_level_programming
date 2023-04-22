#include <stdio.h>

/**
 * main - Entry point
 * Description: This program prints the alphabets in lowercase
 * then in uppercase.
 *
 * Return: Always (0) Success
 */
int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}

	l = 'A';

	while (l <= 'Z')
	{
		putchar(l);
		l++;
	}

	putchar('\n');

	return (0);
}
