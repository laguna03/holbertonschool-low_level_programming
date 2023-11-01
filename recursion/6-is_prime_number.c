#include "main.h"
/**
 * prime - auxiliar function to is prime number
 * @i: number 1
 * @j: number 2
 * Return: 1 for prime number and 0 for non prime number
*/
int prime(int i, int j)
{
	if (j == 1)
		return (1);
	else if ((i % j) == 0)
		return (0);
	else
		return (prime(i, j - 1));
}
/**
 * is_prime_number - its prime number
 * @n: number to check if its prime
 * Return: true or false in binary
*/
int is_prime_number(int n)
{
	if (n > 1)
		return (prime(n, n - 1));
	else
		return (0);
}
