#include <stdio.h>

/**
 * main - function to print all single digits of base 10
 *
 * Return: 0 on success
 */

int main(void)
{
	int up = 0;

	while (up < 10)
	{
		printf("%d", up);
		up++;
	}
	printf("\n");
	return (0);
}
