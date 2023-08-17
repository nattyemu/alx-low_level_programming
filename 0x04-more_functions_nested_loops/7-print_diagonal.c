#include "main.h"

/**
 * print_diagonal - print triangle
 * @n: size of diagonal
 * Return: nothing
 */

void print_diagonal(int n)
{
int i, j;

for (i = 0; i < n; i++)
{
for (j = 1; j <= i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
if (n <= 0)
_putchar('\n');
}
