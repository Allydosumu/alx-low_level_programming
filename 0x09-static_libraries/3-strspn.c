#include "main.h"
#include <stdio.h>
/**
 * _strspn - This program writes a function that
 * gets the length of a prefix substring.
 * @s: initial segment
 * @accept: prefix substring
 *
 * Return: Length of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				bytes++;
				break;
			}
			else if (accept[a + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
