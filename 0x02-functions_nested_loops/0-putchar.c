#include "main.h"

/**
 * main - Entry point
 *
 * Description: This program prints _putchar,
 * followed by a new line, without using the
 * standard library.
 *
 *Return: 0
 */

int main(void)
{
	char c[] = "_putchar\n";
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar(c[i]);
	}

	return (0);
}
