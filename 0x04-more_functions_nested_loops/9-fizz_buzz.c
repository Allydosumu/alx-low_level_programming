#include <stdio.h>
#include "main.h"

/**
 * main - This is a fizz buzz program
 *
 * Description: Prints Fizz for multiples of 3,
 * Buzz for multiples of 5 and FizzBuzz for multiples of 15
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");

	return (0);
}
