#include "main.h"

/**
 * string_toupper - function that change a string to uppercase
 *
 * @str: a string to be changed
 *
 * Return: a poiter to be changed
 */

char *string_toupper(char *str)
{
int id = 0;
while (str[id])
{
if (str[id] >= 'a' && str[id] <= 'z')
str[id] -= 32;
id++;
}
return (str);
}
