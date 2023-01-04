#include "main.h"

/**
 * findPrime - prime number finder
 * @i: input number
 * @j: input number
 *
 * Return: 1 if number is prime. 0 if otherwise
 */
int findPrime(int i, int j)
{
	if (i % j == 0)
	{
		if (i == j)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0 + findPrime(i, j + 1));
}

/**
 * is_prime_number - checks if input integer is prime
 * @n: input integer
 *
 * Return: 1 if @n is prime. 0 if otherwise
 */
int is_prime_number(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	return (findPrime(n, 2));
}
