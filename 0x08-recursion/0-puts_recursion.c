#include "main.h"

/**
 * _puts_recursion - its a function
 * @s: character
 * Return: is 0
 */

void _puts_recursion (char *s)
{
	if(*s)
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}

	else
	_putchar('\n');
}
