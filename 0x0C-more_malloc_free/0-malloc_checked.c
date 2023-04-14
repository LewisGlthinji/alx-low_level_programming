#include <stdlib.h>
#include "main.h"

/**
* malloc_checked - cause normal process termination with a status value of 98
* @b: number of bytes to allocated memory
* Return: a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)

{
	void *v;

	v = malloc(b);
	if (v == NULL)
	exit(98);
	return (v);
}
