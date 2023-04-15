#include "main.h"
/**
 * _strspn - Entry point
 * @c: input
 * @a: input
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *c, char *a)
{
	unsigned int n = 0;
	int i;


	while (*c)
	{
		for (i = 0; a[i]; i++)
		{
			if (*c == a[i])
			{
				n++;
				break;
			}
			else if (a[i + 1] == '\0')
				return (n);
		}
		c++;
	}
	return (n);
}
