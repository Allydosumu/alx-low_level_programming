#include "main.h"
/**
 * _strncpy - This program writes a function that
 * copies a string
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes from src.
 * Return: 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int l;

	for (l = 0; l < n && src[l] != '\0'; l++)
		dest[l] = src[l];
	for ( ; l < n; l++)
		dest[l] = '\0';

	return (dest);
}
