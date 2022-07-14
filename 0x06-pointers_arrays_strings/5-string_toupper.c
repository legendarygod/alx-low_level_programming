#include "main.h"

/**
 * string_toupper - coverts string to uppercase
 * @s: string to change
 *
 * Return: uppercased string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}
