#include "main.h"
#include <string.h>
/**
 * _strchr - entry points, locates char in str
 * @s: string we qare checking
 * @c: char to be found
 * Return: pointer to the first occurence of he vharacter or null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
