#include "main.h"
#include <unistd.h>
/**
*_isdigit - checks if an input is digit
* @c: input to be checked
* Return: 1 if digit, 0 when otherwise
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
