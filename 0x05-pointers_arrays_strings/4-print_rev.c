#include "main.h"

/**
 * print_rev - prinytsa sytring in reverse
 * @s: poinyter
 * Return: 0
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
