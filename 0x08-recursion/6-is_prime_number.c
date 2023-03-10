#include "main.h"

int actual_prime_number(int n, int i);

/**
 * is_prime_number -  returns 1 if integer is a prime number
 * @n: number to evaluate
 * return: 1 if the prime number, if not 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime_number(n, n - 1));
}
/**
 * actual_prime - calculate if a number is prime recurse
 * @n:number to evaluate
 * @i: iterator
 * return: 1 if n is a prime,if not 0
 */
int actual_prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime_number(n, i - 1));
}
