#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and uppercase,
 * Return: Always (Success)
 */

int main(void)
{
int lw = 'a';
int up = 'A';
while (lw <= 'z')
{
putchar(lw);
lw += 1;
}
while (up <= 'Z')
{
putchar(up);
up += 1;
}
putchar('\n');
return (0);
}
