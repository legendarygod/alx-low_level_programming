#include "main.h"

/**
 * _strlen - cheecks for the length of string
 * @s: pointer char
 *
 * Return: i really dont know
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
