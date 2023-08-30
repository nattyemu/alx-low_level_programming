#include "main.h"
#include <stdio.h>

int comparator(char *s, int n1, int n2);

/**
 * _strlen_recursion - function that returns the length of the string
 *
 * @s: input
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);

return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - function that returns 1 if a string is a palindrome
 * @n2: biggest itrator
 * @s: input
 * @n1: smallest itrator
 * Return: 1 if a string is a palindrome and 0 if not
 */
int comparator(char *s, int n1, int n2)
{
if (*(s + n1) == *(s + n2))
{
if (n1 == n2 || n1 == n2 + 1)
return (1);
return (0 + comparator(s, n1 + 1, n2 - 1));
}
return (0);
}

/**
 * is_palindrome - function that returns 1 if a string is a palindrome
 *
 *
 * @s: input
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
if (*s == '\0')
return (1);
return (comparator(s, 0, _strlen_recursion(s) - 1));
}
