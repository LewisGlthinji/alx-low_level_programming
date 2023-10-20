#include "main.h"
/**
 * leet - encode a string into 1337
 * @n: input value
 * Return: n value
 */

char *leet(char *n)

{
	int i;
	int t;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (t = 0; t < 10; t++)
		{
			if (n[i] == s1[t])
			{
				n[i] = s2[t];
			}
		}
	}
	return (n);
}
