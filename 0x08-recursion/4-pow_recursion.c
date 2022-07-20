#include "main.h"

/**
 * _pow_recursion - returns the value of x raaised to pow y
 * @x: base
 * @y: exponent
 * Return: value of x to power of y, return -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, (y - 1)));
}
