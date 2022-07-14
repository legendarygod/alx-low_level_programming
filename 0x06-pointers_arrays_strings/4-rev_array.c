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
	int = 0, t;

	n = n - 1;
	while (i < n)
	{
		t = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = t;
		i++;
		n--;
	}
}
