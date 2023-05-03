#include "main.h"

/**
 * _strcpy - This program writes a function that
 * copies the string pointed to by src into dest
 * @dest: destination
 * @src: source
 * Return: char with copy of string
 */

char *_strcpy(char *dest, char *src)
{
	int m;

	for (m = 0; *(src + m) != '\0'; m++)
	{
		dest[m] = *(src + m);
	}
	dest[m] = '\0';

	return (dest);
}
