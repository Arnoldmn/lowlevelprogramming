#include "main.h"

/**
 * _memcpy - function that copies bytes from src to dest
 * to @dest
 * @n: copy function
 * @dest: to memory
 * @src: from memory
 * Return: points to @deest
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
