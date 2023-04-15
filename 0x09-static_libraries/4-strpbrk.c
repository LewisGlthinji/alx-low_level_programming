#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *a, char *c)
{
	int i;


	while (*c)
	{
		for (i = 0; a[i]; i++)
		{
		if (*c == a[i])
		return (c);
		}
	c++;
	}

return ('\0');
}
