#include "main.h"

/**
 * _puts_recusrion - entry point
 * @s: pointer to string ro be printed
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
