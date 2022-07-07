#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0;
 */

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("%s ", "FizzBuzz");
		else if (i % 5 == 0)
			printf("%s ", "Buzz");
		else if (i % 3 == 0)
			printf("%s ", "Fizz");
		else
			printf("%d ", i);
		i++;
	}
}
