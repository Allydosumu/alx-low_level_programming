#include "main.h"

/**
 * main - check the code
 *
 * Description: This program prints the alphabet
 * in lowercase, followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
