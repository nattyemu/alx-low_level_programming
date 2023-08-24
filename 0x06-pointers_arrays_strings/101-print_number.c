#include "main.h"

/**
 * print_number - function that prints an integer
 *
 * @n: input value
 *
 * Return: nothing
 */

void print_number(int n)
{
unsigned int num;
if (n < 0)
{
_putchar('-');
num = -n;
}
if ((num / 10) > 0)
print_number(n / 10);
_putchar((num % 10) + '0');
}
