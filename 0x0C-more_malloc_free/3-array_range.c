#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an aarray of ints
 * @min: min value
 * @max: max avlue
 * Return: pointer to the new array
 * if min > max, return null
 * if malloc fails, return null
 */
int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(*ar) * ((max - min) + 1));

	if (ar == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ar[i] = min;
	return (ar);

