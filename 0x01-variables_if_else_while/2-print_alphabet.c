#include <stdio.h>

/**
 * main - Entry point
 * Description: This program prints alphabets in lowercase.
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
	putchar('\n');
	return (0);
}
