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
	char c;

	for (c = 0; c <= 9; c++)
	{
	printf("%d", c);
	}
	putchar('\n');
	return (0);
}
