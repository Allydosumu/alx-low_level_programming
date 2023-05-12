#include <stdio.h>
#include <stdlib.h>
/**
 * main - This program multiplies two numbers
 *
 * @argc: number of arguments in the command line
 * @argv: array containing command line arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, multi;

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	multi = a * b;

	if (argc != 3)
	{
		printf("%d\n", multi);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
