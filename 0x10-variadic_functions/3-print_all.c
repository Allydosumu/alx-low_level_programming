#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - Prints a char.
 * @arg: A list of arguments pointing to
 *       the character to be printed.
 */
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_int - Prints an int.
 * @arg: A list of arguments pointing to
 *       the integer to be printed.
 */
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_float - Prints a float.
 * @arg: A list of arguments pointing to
 *       the float to be printed.
 */
void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
 * print_string - Prints a string.
 * @arg: A list of arguments pointing to
 *       the string to be printed.
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - Prints anything, followed by a new line.
 * @format: A string of characters representing the argument types.
 * @...: A variable number of arguments to be printed.
 *
 * Return: Any argument not of type char, int, float,
 * or char * is ignored.
 * If a string argument is NULL, (nil) is printed instead.
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	int i = 0, j = 0;
	char *separator = "";

	datatype choice[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(arg, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;

		while (choice[j].letter != '\0')
		{
			if (choice[j].letter == format[i])
			{
				printf("%s", separator);
				choice[j].func(arg);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(arg);
	printf("\n");
}
