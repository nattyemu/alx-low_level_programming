#include "main.h"
/*
* print_sign - to check alphabet
* @n: to be checked
* Return: 1 to positive or 0 to zero -1 to negative
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
