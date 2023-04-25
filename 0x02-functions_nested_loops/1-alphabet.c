#include "main.h"

/**
 * main - print alphabet
 *
 * Description: This program prints the alphabet
 * in lowercase, followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
}
