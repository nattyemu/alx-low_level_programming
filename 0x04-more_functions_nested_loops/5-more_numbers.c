#include "main.h"

/**
 * more_numbers - prints 0 up to 14 10 times
 *
 * Return: nothing
 */

void more_numbers(void)
{
int i, j;

for (i = 0; i <= 9; i++)
{
for (j = 0; j < 15; j++)
{
_putchar(j + '0');
}
if (i == 9)
continue;
_putchar('\n');
}
}
