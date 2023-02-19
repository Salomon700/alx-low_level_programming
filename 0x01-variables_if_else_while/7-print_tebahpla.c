#include <stdio.h>

/**
 * main - function to print the alphabet in reverse
 *
 * Return: 0 on success
 */

int main(void)
{
	int let = 'z';

	while (let >= 'a')
	{
		putchar(let);
		let -= 1;
	}
	putchar('\n');
	return (0);
}
