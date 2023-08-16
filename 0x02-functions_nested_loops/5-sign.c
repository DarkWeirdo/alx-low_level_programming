#include "main.h"
#include <unistd.h>
/**
*print_sign - checks if the input is a positive number or negative or zero
* @n: input to be checked
*_putchar - prints '+', '=', or '0'
* Return: 1 if positive, 0 when zero, -1 when negative
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
