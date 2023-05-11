#include "main.h"
/**
 * _strlen_recursion - This program writes a function that
 * finds the length of a string
 * @s: string
 * Return: the string legth
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
/**
 * compare_string - This function compares the
 * characters of the string
 * @left: first string
 * @right: second string
 * Return: 1 if same 0 if not
 */
int compare_string(char *left, char *right)
{
	if (left >= right)
		return (1);
	if (*left == *right)
		return (compare_string(left + 1, right - 1));
	return (0);
}
/**
 * is_palindrome - This checks if a string is a palindrome
 * @s: string
 *
 * Return: 1 if true, 0 if not
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (compare_string(s, (s + length - 1)));
}
