#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *strng;
	int i, n = 0;
	
	if (str == NULL)
	return (NULL);

	i = 0;
	while (str[i] != '\0')
	i++;

	strng = malloc(sizeof(char) * (i + 1));

	if (strng == NULL)
	return (NULL);
	for (n = 0; str[n]; n++)
	strng[n] = str[n];
	return (strng);
}
