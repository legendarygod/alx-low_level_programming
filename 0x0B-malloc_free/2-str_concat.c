#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates 2 strings
 * @s1: string to be concatenated upom
 * @s2: string to be concatenated to @s1
 * Return: a pointer to the newly alllocated memory space containing
 * the concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, concat_i = 0, len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		concat_str[concat_i++] = s1[i];
	for  (i = 0; s2[i]; i++)
	{
		concat_str[concat_i++] = s2[i];
	}
	return (concat_str);
}
