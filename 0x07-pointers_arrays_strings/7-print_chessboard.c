#include "main.h"
/**
 * print_chessboard - This program writes a function that
 * prints the chessboard.
 * @a: Chessboard to be printed
 *
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	unsigned int l, n = 0;

	for (l = 0; l < 64; l++)
	{
		if (l % 8 == 0 && l != 0)
		{
			n = l;
			_putchar('\n');
		}
		_putchar(a[l / 8][l - n]);
	}
	_putchar('\n');
}
