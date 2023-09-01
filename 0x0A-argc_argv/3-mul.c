#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints the multiplication
 *
 * @argv: argument vector
 * @argc: size of argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
int n, m;
n = 0;
m = 0;
if (argc == 3)
{
n = atoi(argv[1]);
m = atoi(argv[2]);
printf("%d\n", n *m);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
