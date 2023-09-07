#include "main.h"
#include <unistd.h>
/**
*_isupper - checks if a letter is upper case
* @c: letter input to be checked
* Return: 1 if uppercase, 0 when otherwise
*/
int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
