#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - gives a number, if greater than 0: positive, if 0: is zero if less than 0: negative, followed by a new line
 * Return: Always (Success)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
