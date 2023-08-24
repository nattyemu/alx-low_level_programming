#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 *
 * @n: the number of element in the array
 * @a: arrey of integer to be reversed
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
int temp, id;
for (id = n - 1; id >= n / 2; id--)
{
temp = a[n - 1 - id];
a[n - 1 - id] = a[id];
a[id] = temp;
}
}
