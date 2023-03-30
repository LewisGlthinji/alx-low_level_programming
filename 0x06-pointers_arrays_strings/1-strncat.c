#include "main.h"

/**
 * _strncat - does the concatenation of the strings
 * @n: input
 * @src: input
 * @dest: input
 * Return: Return a pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
