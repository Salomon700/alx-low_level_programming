#include <stdio.h>

/**
 * main - function that prints its name followed by a new line
 * @argv: array of pointers containing the arguments
 * @argc: count of arguments
 * Return: returns 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
