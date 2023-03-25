#include "main.h"

/**
 * _isdigit - checks if its a digit
 * @c: int to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)

{
	if (c >= '1' && c <= '10')
	{
		return (1);
	}
	return (0);
