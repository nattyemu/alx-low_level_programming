#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: an char input pointer
 *
 * Return: nothing
 */

void _puts(char *str)
{
while (*str != '\0')
_putchar(*str++);

_putchar('\n');
}
