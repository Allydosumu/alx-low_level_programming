#include "main.h"
/**
 * find_prime_number - This program writes a function that
 * calculates prime numbers.
 * @n: test input
 * @l: integer
 * Return: prime number
 */
int find_prime_number(int n, int l)
{
	if (n == l)
	{
		return (1);
	}
	else if ( n % l == 0)
	{
		return (0);
	}
	return (find_prime_number(n, l + 1));
}
/**
 * is_prime_number - This program writes a function that
 * returns 1 if input int is a prime number.
 * @n: input
 * Return: 1 for prime numbers, 0 otherwise
 */
int is_prime_number(int n)
{
	int l = 3;

	if (n % 2 == 0 || n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (find_prime_number(n, l));
}
