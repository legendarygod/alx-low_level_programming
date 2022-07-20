#include "main.h"
/**
 * is_square_root - confirms the natural sqrt of an input
 * @num: num to be checked
 * @squared: number to be tested as natural sqaure
 * Return: int
 */
int is_square_root(int num, int squared)
{
	if ((squared * squared) == num)
	{
		return (squared);
	}
	else if (squared == num / 2)
	{
		return (-1);
	}
	return (is_square_root(num, squared + 1));
}
/**
 * _sqrt_recursion - returns the natural sqrt of a n0
 * @n: argument
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	int squared = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (is_square_root(n, squared));
}
