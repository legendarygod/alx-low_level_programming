#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always returns 0
 */
int main(void)
{
	int i;

	for (i = '0'; i < '20'; i++;)
	{
		putchar(i);
		if(i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
			
