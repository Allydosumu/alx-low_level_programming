#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet 10 times
 * in lowercase
 */

void print_alphabet_x10(void)
{
	char low, letter;

	for (low = 0; low <= 9; low++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
