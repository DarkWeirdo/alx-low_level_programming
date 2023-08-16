#include "main.h"
#include <unistd.h>
/**
*print_sign - checks if the input is a positive number or negative or zero
* @n: input to be checked
* Return: 1 if positive, 0 when zero, -1 when negative
*/
int print_sign(int n)
{
if (n > 0)
return (1);
else if (n < 0)
return (-1);
else
return (0);
}
