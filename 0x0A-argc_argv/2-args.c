#include "main.h"
#include <stdio.h>

/**
 * main - function that prints all the argument content
 *
 * @argv: argument vector
 * @argc: size of argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
