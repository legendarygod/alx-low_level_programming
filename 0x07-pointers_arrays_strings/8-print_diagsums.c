#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print sum(diaonals) of square matrices
 * @a: the integer array
 * @size: the size of the arrays
 */
void print_diagsums(int *a, int size)
{
	int, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		sum2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
