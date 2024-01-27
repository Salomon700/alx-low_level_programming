#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to print number of arguments
 *
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
