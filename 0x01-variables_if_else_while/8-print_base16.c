#include <stdio.h>

/**
 * main - Entry point
 * Description: This program prints all numbers
 * in base 16 in lowercase.
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int n = 0;
	char hex[16] = "0123456789abcdef";

	while (n < 16)
	{
		putchar(hex[n]);
		n++;
	}
	putchar('\n');
	return (0);
}
