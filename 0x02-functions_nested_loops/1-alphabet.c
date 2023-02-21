#include "main.h"

/**
 * print_alphabet - function that prints the alphabet
 *
 * Return:0 on success
 */

void print_alphabet(void)
{
	a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
