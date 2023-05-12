#include <stdio.h>
/**
 * main - This program prints the number of
 * arguments passed into it.
 * @argc: number of command line arguments
 * @argv: array containing the command line arguments
 *
 * Return: number of arguments passed
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
