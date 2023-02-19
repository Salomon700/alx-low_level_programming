#include <stdio.h>

/**
 * main - function that prints al single digits of base 10
 * do not use char or printf or puts
 * only use putchar twice
 * Return: 0 on success
 */

int main(void)
{
	int numb = 0;

	for (numb = 0; numb < 10; numb += 1)
		putchar((numb % 10) + '0');

	putchar('\n');
	return (0);
}
