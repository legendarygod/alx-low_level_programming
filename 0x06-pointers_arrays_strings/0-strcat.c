#include "main.h"

/**
 * _strcat - concats two strings
 * @dest: string
 * @src: strin to add
 *
 * Return: the resulting string
 */
char *_strcat(char *dest, shar *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
