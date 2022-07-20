#include "main.h"

/**
 * factorial - prints factorial
 * @n: figure of which we shall return its factorial
 * Return: factorial of @n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	} else if (n == 0)
	{
		return (1);
	} else
		return (n * factorial(n - 1));
}
