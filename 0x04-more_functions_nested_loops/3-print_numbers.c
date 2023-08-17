#include "main.h"

/**
 * print_numbers - prints 0 up to 9
 *
 * Return: nothing
 */

void print_numbers(void)
{
int i;

for (i = 0; i <= 9; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
