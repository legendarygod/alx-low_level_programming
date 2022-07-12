#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an input no of elements a number of times
 *
 * @a: array of integrs
 *
 * @n: the number of elements to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
			continue;

		printf(", ");
	}
	printf("\n");
}
