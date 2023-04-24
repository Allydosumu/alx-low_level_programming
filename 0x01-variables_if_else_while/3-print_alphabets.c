#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: This program assigns random numbers to n
 * print whether the number stored in the variable n is
 * positive or negative.
 * Description: This program prints the alphabets in lowercase
 * then in uppercase.
 *
 * Return: Always (0) Success
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;

	char l = 'a';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}

	l = 'A';

	while (l <= 'Z')
	{
		putchar(l);
		l++;
	}

	putchar('\n');

	return (0);
}
