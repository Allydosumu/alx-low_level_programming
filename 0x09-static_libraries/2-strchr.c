#include "main.h"
#define NULL 0
/**
 * *_strchr - This program writes a function that
 * locates a character in a string.
 * @s: string
 * @c: character
 * Return: first occurrence of character c and NULL
 * if not found..
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c) /* find match */
		i++;

	if (s[i] == c) /* if match, assign to address */
		return (&s[i]);
	else
		return (NULL);
}
