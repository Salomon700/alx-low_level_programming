#include <stdio.h>

/**
 * main - function that prints the number of
 * arguments passed into it
 * @argv: array of pointer containing the arguments
 * @argc: number of arguments
 * Return: return 0
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
