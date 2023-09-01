#include "main.h"

/**
 * _isupper - check the char is uppercase
 * @c: to be checked
 * Return: 1 for uppercase 0 for else
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
