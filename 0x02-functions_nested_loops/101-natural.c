#include <stdio.h>

/**
* main - print the sum of multiplicity of 3 and 5
* Return: 0 Success
*/
int main(void)
{
int i, z = 0;
while (i < 1024)
{
if ((i % 3 == 0) || (i % 5 == 0))
z += i;
i++;
}
printf("%d\n", z);
return (0);
}
