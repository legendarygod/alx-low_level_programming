#include "main.h"
/**
 * _strpbrk - search a string for any set of bytes
 * @s: string to be searched
 * @accept: holds the number of bytes we use to search is char s
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = 0;
		while (accept[i])
		{
			if (*s == accept[i])
			{
				return (s);
			}
			i++;
		}
		s++;
	}
	return ('\0');
}
