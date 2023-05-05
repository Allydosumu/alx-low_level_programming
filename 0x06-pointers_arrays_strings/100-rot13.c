#include "main.h"
/**
 * rot13 - This program writes a function that
 * encodes a string using rot13
 * @s: The string.
 * Return: s.
 */
char *rot13(char *s)
{
	int count = 0, l;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + count) != '\0')
	{
		for (l = 0; l < 52; l++)
		{
			if (*(s + count) == alphabet[l])
			{
				*(s + count) = rot13[l];
				break;
			}
		}
		count++;
	}

	return (s);
}
