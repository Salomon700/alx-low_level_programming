#include <stdio.h>
#include <string.h>

/**
 * main - program to print its own name
 *
 * @argc: number of arguments
 * @argv: array of points to arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
