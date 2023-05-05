#include "main.h"
/**
 * cap_string - This program writes a function that
 * capitalizes all words of a string.
 * @s: string
 *
 * Return: s
 */
char *cap_string(char *s)
{
	int count = 0, l;
	int code[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	if (*(s + count) >= 97 && *(s + count) <= 122)
		*(s + count) = *(s + count) - 32;
	count++;
	while (*(s + count) != '\0')
	{
		for (l = 0; l < 13; l++)
		{
			if (*(s + count) == code[l])
			{
				if ((*(s + (count + 1)) >= 97) && (*(s + (count + 1))
<= 122))
					*(s + (count + 1)) = *(s + (count + 1)) - 32;
				break;
			}
		}
		count++;
	}
	return (s);
}
