#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main- This program adds positive numbers
 *
 * @argc: The number of arguments in the command line
 * @argv: array containing command line arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n, m, sum = 0;

	for (n = 1; n < argc; n++)
	{
		for (m = 0; argv[n][m] != '\0'; m++)
		{
			if (!isdigit(argv[n][m]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[n]);
	}
	printf("%d\n", sum);
	return (0);
}
