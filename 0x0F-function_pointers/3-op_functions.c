#include "3-calc.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds two numbers
 * @a: first number
 * @b: second number
 *
 * Return: add
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts
 * @a: 1st no
 * @b: 2nd no
 *
 * Return: subtraction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies  2 numbera
 * @a: 1st no
 * @b: 2nd no
 * Return: products of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two no
 * @a: 1st no
 * @b: 2nd no
 * Return: division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - calculates the module of 2 no
 * @a: 1st no
 * @b: 2nd no
 * Return: the remainder of a / b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
