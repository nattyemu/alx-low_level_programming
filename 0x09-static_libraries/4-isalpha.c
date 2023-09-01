#include "main.h"
/**
* _isalpha - to check alphabet
* @c: to be checked
* Return: 1 lowercase or 0 everything else
*/
int _isalpha(int c)
{
if ((c >= 95 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
return (0);
}
