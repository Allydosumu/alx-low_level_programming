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
	int i, combine_i = 0, l = 0, m = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + l))
		i++, l++;
	while (*(s2 + m))
		combine_i++, m++;
	combine_i++;

	combine_str = malloc(sizeof(char) * (i + combine_i));

	if (combine_str == NULL)
		return (NULL);

	l = 0, m = 0;
	while (l < i)
	{
		*(combine_str + l) = *(s1 + l);
		l++;
	}
	while (m < combine_i)
	{
		*(combine_str + l) = *(s2 + m);
		l++, m++
	}

	return (combine_str);
}
