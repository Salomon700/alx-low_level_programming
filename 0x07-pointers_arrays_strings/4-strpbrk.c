#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: where the search is conducted
 * @accept: where searched bytes are located
 * Return: returns a pointer in s that
 * matches one byte in accept or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}
	return ('\0');
}
