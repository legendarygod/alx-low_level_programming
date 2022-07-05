#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - entry point
 * description: more printing
 * Return: print from 1 to 98
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
