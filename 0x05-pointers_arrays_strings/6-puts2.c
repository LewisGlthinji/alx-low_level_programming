#include "main.h"

/**
 * puts2 - function print only one character out of two
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int  longi = 0;
	int b = 0;
	char *a = str;
	int c;

	while (*a != '\0')
	{
		a++;
		longi++;
	}
	b = longi - 1;
	for (c = 0 ; c <= b ; c++)
	{
		if (c % 2 == 0)
	{
		_putchar(str[c]);
	}
	}
	_putchar('\n');
}
