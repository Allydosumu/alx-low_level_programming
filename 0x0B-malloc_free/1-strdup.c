#include "main.h"
#include <stdlib.h>
/**
 * _strdup - This program writes a function that
 * returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string
 * given as a parameter.
 * @str: Copy of the string
 * Return: NULL if str is NULL and insufficient memory
 */
char *_strdup(char *str)
{
	char *copy;
	int i, l = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		l++;

	copy = malloc(sizeof(char) * (l + 1));

	if (copy == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		copy[i] = str[i];

	copy[i] - '\0';

	return (copy);
}
