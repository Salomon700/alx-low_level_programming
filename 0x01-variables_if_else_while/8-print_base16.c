#include <stdio.h>

/**
 * main - -function prints the letter numbers of base 16
 *
 * Return: 0 on success
 */

int main(void)
{
	int alet = 48;
	int let = 'a';

	while (alet <= 57)
	{
		putchar(alet);
		alet += 1;
	}
	while (let <= 'f')
	{
		putchar(let);
		let += 1;
	}
	putchar('\n');
	return (0);
}
