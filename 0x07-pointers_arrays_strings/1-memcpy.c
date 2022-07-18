#include "main.h"
/**
 * _memcpy - entry point. copies memory area
 * *@dest: aceepts input of dest
 * *@src: accepts input of src
 * *@n: accepts input of n
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = src[i];
		i++;
	}
	return (dest);
}
