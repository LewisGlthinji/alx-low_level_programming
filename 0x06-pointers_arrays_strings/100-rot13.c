#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer
 * Return: function that encoded a string using rot13.
 */

char *rot13(char *s)
{
	int i;
	int t;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (t = 0; t < 52; t++)
		{
			if (s[i] == data1[t])
			{
				s[i] = datarot[t];
				break;
			}
		}
	}
	return (s);
}
