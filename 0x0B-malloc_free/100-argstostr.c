#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concats all arguments of my program
 * @ac: arg count
 * @av: argument of size @ac
 * Return: double pointer to a new string of conated arguments,
 * or null
 */
char *argstostr(int ac, char **av)
{
	char *a, *retp;
	int i, j, total;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0, total = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, total++)
			;
		total++;
	}
	total++;

	a = malloc(total * sizeof(char));

	if (a == NULL)
		return (NULL);
	retp = a;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*a = av[i][j];
			a++;
		}
		*a = '\n';
		a++;
	}
	return (retp);
}
