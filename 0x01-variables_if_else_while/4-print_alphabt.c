#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a function prints alphabet with out e and q
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	if (c == 'e' || c == 'q')
	continue;

	putchar(c);
	}
	putchar('\n');
	return (0);
}
