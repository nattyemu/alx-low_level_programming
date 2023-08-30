#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - function that whether tne number is prime or not
 *
 * @n: input
 *
 * Return: 1 if the number is prime or 0 anything else
 */
int is_prime_number(int n)
{
return (check_prime(n, 1));
}

/**
 * check_prime - function that returns whether a number prime or not
 *
 * @n: input
 * @i: input
 * Return: 1 if the number is prime or 0 anything else
 */
int check_prime(int n, int i)
{
if (n <= 1)
return (0);

if (n % i == 0 && i > 1)
return (0);

if ((n / i) < i)
return (1);

return (check_prime(n, i + 1));
}
