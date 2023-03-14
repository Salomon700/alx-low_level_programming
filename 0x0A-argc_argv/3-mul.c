#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of two integers to the stdout
 * @argc: the number of passed arguments
 * @argv: the array of passed arguments
 *
 * Return: the product if argc == 2, else 1
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
