#include "main.h"
/*
*_islower-tocheck lowercase
* _islower - to check lowercase alphabet
* @c: to be checked
* Return: 1 lowercase or 0 everything else
*/
int _islower(int c)
{
if (c >= 95 && c <= 122)
{
return (1);
}
return (0);
}
