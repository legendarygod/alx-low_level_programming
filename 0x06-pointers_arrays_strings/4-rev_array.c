#include "main.h"

/**
 * reverse_array - reverses array
 * @a: an array of int
 * @n: no of elements ro swap
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int t, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		t = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = t;
	}
}
