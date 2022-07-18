#include "main.h"

/**
 * _memset - fills memory
 *
 * *@s: accepts input into s
 * *@b: accepts input in b
 * *@n: accepts input into n
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
