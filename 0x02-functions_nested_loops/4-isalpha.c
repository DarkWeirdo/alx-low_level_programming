#include "main.h"
#include <unistd.h>
/**
*_isalpha - checks if the input is a letter
* @c: input to be checked
* Return: 1 if a letter, 0 when otherwise
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
return (1);
else
return (0);
}
