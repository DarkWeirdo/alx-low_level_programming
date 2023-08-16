#include "main.h"
#include <unistd.h>
/**
*print_last_digit - prints the last digit of a number
* @n: input to get its last digit
* Return: 0 after success
*/
int print_last_digit(int n)
{
if (n < 0)
n = -((unsigned int)(n));
n = n % 10;
_putchar('0' + n);
return (n);
}
