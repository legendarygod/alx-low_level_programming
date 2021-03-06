#include <stdio.h>
/**
 * _atoi - converts string to integer
 *
 * @s: pointer string to convert from
 *
 * Return: integer from function
 */
int _atoi(char *s)
{
	int sign = 1;
	int total = 0;
	char working = 0;

	while (*s)
	{
		if (*s == '-')
			sign = sign * -1;
		if (*s >= '0' && *s <= '9')
		{
			working = 1;
			total = total * 10 + *s - '0';
		}
		else if (*s < '0' || *s > '9')
		{
			if (working)
				break;
		}
		s++;
	}
	if (sign < 0)
		total = (-(total));
	return (total);
}
