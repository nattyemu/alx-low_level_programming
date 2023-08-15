#include "main.h"
/*
* print_to_98 - display up to 98
* @n: up to 98
*
* Return: void
*/
void print_to_98(int n)
{
int i;
if (n > 98)
{
for (i = n; i >= 98; i--)
{
_putchar(i + '0');
if (i == 98)
continue;
_putchar(44);
}
}
else if (n < 98)
{
for (i = n; i <= 98; i++)
{
_putchar(i + '0');
if (i == 98)
continue;
_putchar(44);
}
}
else
_putchar(57);
}
