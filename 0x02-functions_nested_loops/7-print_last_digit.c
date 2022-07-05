#include "main.h"
/**
 * print_last_digit - entry point
 * description: last digit print
 * @n: integer passed into the function
 * Return: last digit of int
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
