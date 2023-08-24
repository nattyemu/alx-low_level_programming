#include <unistd.h>
/*
* _putchar - writes the character c to stdout
* @c: the character c to print
* Return 1 to success
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
