#include "main.h"
/**
 * leet - This program writes a function that encodes
 * a string into 1337.
 * @s: The string to be encoded
 *
 * Return: s
 */
char *leet(char *s)
{
	int index = 0, l;
	int lower_case[] = {97, 101, 111, 116, 108};
	int upper_case[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + index) != '\0')
	{
		for (l = 0; l < 5; l++)
		{
			if (*(s + index) == lower_case[l] || *(s + index) == upper_case[l])
			{
				*(s + index) = numbers[l];
				break;
			}
		}
		index++;
	}
	return (s);
}
