#include "main.h"
/**
 * _strncat - This program writes a function that
 * concatenates two strings
 * @dest: string 1
 * @src: string 2
 * @n: amount of bytes from src.
 * Return: 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
