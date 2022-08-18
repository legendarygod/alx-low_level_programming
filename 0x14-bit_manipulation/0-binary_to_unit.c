#include <string.h>
#include "main.h"

/**
 * binary_to_unit - converts a binary to an unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_unit(const char *b)
{
	unsigned int num = 0, mult = 1;
	int len;

	if (b == NULL)
		return (0);
	for (len = 0; b[len];)
		len++;
	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		num += (b[len] - '0') * mult;
		mult *= 2;
	}
	return (num);
}
