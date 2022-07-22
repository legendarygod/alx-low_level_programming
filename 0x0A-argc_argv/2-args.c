#include <stdio.h>
/**
 * main - prints all args passed
 * @argc: no of cmd line args
 * @argv: array of cmd line arg
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
