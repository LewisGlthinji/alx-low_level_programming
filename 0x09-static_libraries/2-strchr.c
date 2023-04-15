#include "main.h"

/**
 * _strchr - Entry point
 * @a: input
 * @b: input
 * Return: Always 0 (Success)
 */

char *_strchr(char *a, char b)
{
	int i = 0;


	for (; a[i] >= '\0'; i++)
	{
		if (a[i] == b)
			return (&a[i]);
	}
	return (0);
}

