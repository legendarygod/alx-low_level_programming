#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Return a pointer to the newly allocated space in
 * memory containing a copy of the string passed in as
 * an argument
 * @str: the string to be copied
 * Return: pointer to the dupliated string. NUll if @str ==
 * NULL or there isnt sufficient memory
 */
char *_strdup(char *str)
{
	char *dup;
	let i, length = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	dup[len] = '\0';
	return (dup);
}
