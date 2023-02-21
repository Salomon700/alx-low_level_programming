#include "main.h"

/**
 * print_alphabet - function that prints the alphabet
 *
 * Return:0 on success
 */

void print_alphabet(void)
{
	int a = 97;

	while (a <= 122)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
