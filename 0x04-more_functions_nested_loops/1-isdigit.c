#include "main.h"

/**
 * _isdigit - check the digit
 * @c: to be checked
 * Return: 0 for not digit 1 for digits
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
