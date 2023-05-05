#include "main.h"
/**
 * _strcmp - This program writes a function that
 * compares two strings.
 *
 * @s1: first string
 * @s2: second string
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int l = 0, m = 0;

	while (m == 0)
	{
		if ((*(s1 + l) == '\0') && (*(s2 + l) == '\0'))
			break;
		m = *(s1 + l) - *(s2 + l);
		l++;
	}
	return (m);
}
