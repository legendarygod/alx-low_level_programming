#include "main.h"
/**
 * _abs - entry point
 * @n: integer passed in
 * description: returns absolute values
 * Return: int
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
		return (n);
}
