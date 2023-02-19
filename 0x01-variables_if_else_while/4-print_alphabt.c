#include <stdio.h>

/**
 * main - this function outputs all alphabets except q and e
 *
 * Return: this function returns 0 on success
 */

int main(void)
{
	int up = 'a';

	while (up <= 'z')
	{
		if (up == 'e' || up == 'q')
		{
			up += 1;
		}
		putchar(up);
		up += 1;
	}
	putchar('\n');
	return (0);
}
