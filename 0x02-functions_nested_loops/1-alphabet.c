#include <main.h>

/**
 * print_alphabet - entry point
 * Description: print. alphabet. lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	int d;

	for (d = 'a'; d <= 'z'; d++)
		_putchar(d);
	_putchar('\n');
}
