#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @a: starting address
 * @v: the value
 * @n: number of bytes
 * Return: changed array with new value for n bytes
 */

char *_memset(char *a, char v, unsigned int n)

{
	int i = 0;

	for (; n > 0; i++)
	{
	a[i] = v;
	n--;
	}
	return (a);
}

