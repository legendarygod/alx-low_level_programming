#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an arrray of chars
 * brginning with a special char
 * @size: The size of the aarray to be initialized
 * @c: the specific char we will start the array with
 * Return: A POINTER to the array, or Null if fxn fails
 * return 0 if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
