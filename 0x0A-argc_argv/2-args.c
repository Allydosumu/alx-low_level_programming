#include <stdio.h>
/**
 * main - This program prints all the arguments
 * it receives.
 * @argc: number of command line arguments.
 * @argv: array containing the command line arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n = 0;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
