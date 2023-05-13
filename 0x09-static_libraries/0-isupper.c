#include "main.h"

/**
 * _isupper - This program writes a function that checks for
 * uppercase character
 *
 * @c: character to be checked
 *
 * Return: 1 if c is uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
