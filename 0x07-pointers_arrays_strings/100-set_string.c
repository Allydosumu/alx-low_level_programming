#include "main.h"
/**
 * set_string - This program writes a function that
 * sets the value of a pointer to a char.
 * @s: pointer
 * @to: character
 * Return: 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}
