#include "main.h"
/**
 * _memcpy - This program writes a function that
 * copies memory area.
 * @dest: memory area destination.
 * @src: memory area source.
 * @n: bytes to be filled.
 * Return: the pointer to destination.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];

	return (dest);
}
