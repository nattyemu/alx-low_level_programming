#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a function prints hexadecimal
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char c;
	int n;

	for (n = 0; n <= 9; n++)
	putchar(n + '0');

	for (c = 'a'; c <= 'f'; c++)
	putchar(c);
	putchar('\n');
	return (0);
}
