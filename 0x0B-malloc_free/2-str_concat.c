#include <stdlib.h>
#include "main.h"
/**
 * str_concat - This program concatenates two strings.
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *combine_str;
	int i, combine_i = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
	l++;

	combine_str = malloc(sizeof(char) * l);

	if (combine_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		combine_str[combine_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		combine_str[combine_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		combine_str[combine_i++] = s2[i];

	return (combine_str);
}
