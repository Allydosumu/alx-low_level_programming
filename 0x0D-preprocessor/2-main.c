#include <stdio.h>
/**
 * main - This program prints the name of the file
 * of the program it was compiled from
 * Return: 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
