#include "main.h"

/**
 * is_prime - detects if an input number is a prime
 * @n: input number
 * @c: iterating number
 * Return: 1 if n is a prime no, 0 if not
 */

int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}
/**
 * is_prime_number - checks if number is a prime
 * @n: numbr to be cheked
 * Return: 1 if prime, 0 if otherwise
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	else if (n < 0)
		return (0);
	else if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
