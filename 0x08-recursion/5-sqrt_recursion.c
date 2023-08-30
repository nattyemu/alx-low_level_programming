#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - function that returns square root
 *
 * @n: input
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}

/**
 * _sqrt - function that returns square root
 *
 * @n: input
 * @i: input
 * Return: square root
 */
int _sqrt(int n, int i)
{
int sq = i * i;

if (sq > n)
return (-1);

if (sq == n)
return (i);

return (_sqrt(n, i + 1));
}
