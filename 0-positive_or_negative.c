#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - gives a number to the variable n every time you run
 * if greater than 0: positive, if 0: is zero
 * if less than 0: negative, followed by a new line
 * Return: 0
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
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}
