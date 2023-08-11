#include<stdio.h>
/**
 * main - a function prints whether the number is negative, positive or zero
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n = 4898;

	if (n > 0)
	printf("%d is positive\n", n);

	else if (n == 0)
	printf("%d is zero \n", n);
	else
	printf("%d is negative \n", n);
	return (0);
}
