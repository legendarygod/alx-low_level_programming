#include "main.h"

/**
 * print_triangle - entry point
 * @size: carrier integer
 * Return: 0
 */

void print_triangle(int size)
{
	int i = 1, aa;

	while (i <= size && size > 0)
	{
		aa = 0;

		while (aa < size - i)
		{
			_putchar('#');
			aa++;
		}
		aa = 0;

		while (aa < i)
		{
			_putchar('\n');
			i++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 1)
		_putchar('\n');
}
