#include <stdio.h>
/**
 * main - prints the number of args passed into it
 * @argc: no of cmd line args
 * @argv: array of cmd line argument
 * Return: 0-success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
