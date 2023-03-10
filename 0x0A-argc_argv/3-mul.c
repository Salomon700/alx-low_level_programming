#include <stdio.h>

/**
 * main - program that multiplies 2 numbers
 * @argv: array of pointers for the arguments
 * @argc: count of arguments
 * Return: return 1 if there are no 2 arguments
 */

int main(int argc, char *argv[])
{
	int numb1, numb2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	numb1 = atoi(argv[1]);
	numb2 = atoi(argv[2]);
	result = numb1 * numb2;

	printf("%d\n", result);
	return (0);
}
