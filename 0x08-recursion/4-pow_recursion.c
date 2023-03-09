#include "main.h"

/**
 * _pow_recursion - function that enters the value x raised to y
 * @x: number raised to the power of y
 * @y: power raised to
 * Return: return -1 if y is less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);
	else
		return (_pow_recursion(x, y - 1) * x);
}
