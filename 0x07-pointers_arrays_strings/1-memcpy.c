#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area.
 * @src source memory area
 * @dest: memory are copied to
 * @n: number of bytes
 * Return: memory area replaced
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
