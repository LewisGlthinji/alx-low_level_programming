#include "main.h"

/**
 * char*_strcpy - a function that copies the pointed string
 * @dest: used to copy to
 * @src: used to copy from
 * return: it returns the string
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
