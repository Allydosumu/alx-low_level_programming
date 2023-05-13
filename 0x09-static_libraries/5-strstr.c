#include "main.h"
/**
 * _strstr - This program writes a function that
 * locates a substring.
 * @haystack: The string to be searched
 * @needle: The substring to be located
 *
 * Return: NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int a;

	if (*needle == 0)
	{
		return (haystack);
	}
	for (; *haystack; haystack++)
	{
		a = 0;
		if (haystack[a] == needle[a])
		{
		for (;;)
		{
			if (needle[a + 1] == '\0')
			return (haystack);

		a++;

		if (haystack[a] != needle[a])
			break;
		}
		}
	}
	return (0);
}

