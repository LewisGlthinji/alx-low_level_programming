#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * *@a: number of bytes
 * Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int a)

{
	int r = 0;
	int i = a;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		a--;
	}
	return (dest);
}
