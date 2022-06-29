#include <stdio.h>
/**
 * main - Prints sized of characters
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu bytes(s)\n", sizeof(long long int));
       printf("size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
