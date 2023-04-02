#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * in lowercase followed by a new line
 * Return: Always success
 */

void print_alphabet_x10(void)
{
	char character;
	int i = 0;

	while (i <= 9)
	{
		for (character = 'a'; character <= 'z'; character++)
		{
			_putchar(character);
		}

		_putchar('\n');

		i++;
	}
}
