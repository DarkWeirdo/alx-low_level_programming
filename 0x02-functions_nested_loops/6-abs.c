#include "main.h"
#include <unistd.h>
/**
*_abs - checks if the input is a positive number or negative or zero
* @n: input to be checked
* Return: 1 if positive, 0 when zero, -1 when negative
*/
int _abs(int n)
{
if (n > 0)
{
return( n );
}
else if (n < 0)
{
return( n * (-1) );
}
else
{
return( 0 );
}
}
