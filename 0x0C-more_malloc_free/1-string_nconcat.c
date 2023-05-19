#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - This program writes a function that
 * concatenates two strings.
 *
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes from s2.
 *
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *combine;
	unsigned int num = n, num2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (num2 = 0; s1[num2]; s1++)
	num++;

	combine = malloc(sizeof(char) * (num + 1));

	if (combine == NULL)
		return (NULL);

	num = 0;

	for (num2 = 0; s1[num2]; num2++)
		combine[num++] = s1[num2];

	for (num2 = 0; s2[num2] && num2 < n; num2++)
		combine[num++] = s2[num2];

	combine[num] = '\0';

	return (combine);
}
