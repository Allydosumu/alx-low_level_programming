#include "main.h"

/**
 * _strlen - This program writes a function that returns
 * the length of a string
 * @s: string to be printed
 * Return: length of string
 */



int _strlen(char *s)
{
	int l;
	int raise = 0;

	for (l = 0; s[l] != '\0'; l++)
	{
		raise++;
	}
	return (raise);
}
