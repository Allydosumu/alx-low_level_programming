#include "main.h"
/**
 * _strlen - This program check the length of
 * a string
 * @s1: string 1
 * @s2: string 2
 *
 * Return: Length of the strings
 */
int _strlen(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(s1 + 1, s2 + 1));
	}
}
/**
 * compare_string - This function compares strings
 *
 * @s1: string 1
 * @s2: string 2
 * Return: compared strings
 */
int compare_string(char *s1, char *s2)
{
	if (s1 == s2)
	{
		return (1);
	}
	else
	{
		return (1 + compare_string(s1 + 1, s2 + 1));
	}
		return (0);
}
/**
 * wildcmp - This function compares 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if string is identical, 0 is not
 */
int wildcmp(char *s1, char *s2)
{
	if (s1 >= s2)
	{
		return (1 + wildcmp(s1, s2));
	}
	else
	{
		return (0);
	}
}
