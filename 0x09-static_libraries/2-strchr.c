#include "main.h"
/**
 * *_strchr - This program writes a function that
 * locates a character in a string.
 * @s: string
 * @c: character
 * Return: first occurrence of character c.
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		if (*(s + a) == c)
		{
			return (s + a);
		}
	}
	return (0);
}
