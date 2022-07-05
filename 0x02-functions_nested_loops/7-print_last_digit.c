#include <main.h>
/**
 * print_last_digit - entry point
 *
 * Returs: last digit of int
 */
int print_last_digit(int)
{
	int last = n % 10;

	if (n < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
