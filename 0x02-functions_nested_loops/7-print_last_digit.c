#include "main.h"
/**
* print_last_digit - to check alphabet
* @n: to be checked
* Return: absolute value for number
*/
int print_last_digit(int n)
{
int last;

last = n % 10;
if (n < 0)
{
last = last * -1;
}
_putchar(last + '0');
return (last);
}
