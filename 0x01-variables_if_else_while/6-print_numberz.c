#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a function prints number from 0 to 9
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
	putchar(c + '0');
	}
	putchar('\n');
	return (0);
}
