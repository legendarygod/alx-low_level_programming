#include <stdlib.h>
#include "main.h"

/**
 * _strlen - calculates the length of string
 * @str: string
 * Return: string length
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * string_nconcat - concats s1 and n btes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concat from string 2
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int num, len, i, j;

	num = n;

	if (s1 == NULL) /*check if first str is empty*/
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0) /* account for -ve n bytes */
		return (NULL);
	if (num >= _strlen(s2)) /*checks if n is bigger than s2*/
		num = _strlen(s2);

	len = _strlen(s1) + num + 1; /*+1 to acct for null byte*/

	ptr = malloc(sizeof(*ptr) * len); /*memory allocation*/

	if (ptr == NULL) /*checks if malloc failed*/
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++) /* loop to concat */
		ptr[i] = s1[i]; /*fill the concat space with s1 first*/
	for (j = 0; j < num; j++)
		ptr[i + j] = s2[j]; /*fills the rem c.s with n bytes of s2*/
	ptr[i + j] = '\0'; /*making the last character an n.t.b*/

	return (ptr);
}
