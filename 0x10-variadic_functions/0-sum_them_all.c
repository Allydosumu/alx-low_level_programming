#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - This function returns the sum of all its parameters
 * @n: integers to add
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list number;
	unsigned int sum = 0, i;

	/* validate valist and initialize */
	if (n == 0)
		return (0);
	va_start(number, n);

	/* iterate through list, update sum, free list */
	for (i = 0; i < n; i++)
		sum += va_arg(number, int);
	va_end(number);

	return (sum);
}
