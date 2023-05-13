#include "main.h"

/**
 * _isalpha - This program checks for
 * alphabetic character.
 *
 * @c: alphabet to check for
 *
 * Return: 1 if c is a letter, lowercase
 * or uppercase; O if otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
