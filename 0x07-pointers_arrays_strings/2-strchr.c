#include "main.h"

/**
 * char *_strchr - function that locates a character in a string
 * @s: strung targeted
 * @c:character targeted
 * Return: returns a pointer to the first occurrence of c in string s or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
