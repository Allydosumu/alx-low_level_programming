#include "main.h"

/**
 * _strcat - This program writes a function that
 * concatenates two strings
 * @dest: string 1
 * @src: string 2
 *
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int l, m, n;

	l = 0, m = 0;
	while (dest[l] != '\0')
		l++;
	while (src[m] != '\0')
		m++;
	for (n = 0; n <= m; n++, l++)
		dest[l] = src[m];
	return (dest);
}
