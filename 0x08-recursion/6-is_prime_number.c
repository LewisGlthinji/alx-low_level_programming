#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - says if is a prime number or not
 * @n - number
 * Return - 1 if the input integer is a prime number
 * otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a n is prime
 * @n - number
 * @t - iterator
 * Return - 1 if the input integer is a prime number
 * otherwise return 0
 */

int actual_prime(int n, int t)
{
	if (t == 1)
		return (1);
	if (n % t == 0 && t > 0)
		return (0);
	return (actual_prime(n, t - 1));
}

