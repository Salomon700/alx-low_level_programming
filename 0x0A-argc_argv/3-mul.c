#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies 2 arguments
 *
 * @argc: argument count
 * @argv: arrray of pointers
 *
 * Return:0
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
