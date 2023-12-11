#include "main.h"
#include <unistd.h>
/**
*_islower - checks if a letter is lower case
* @c: letter input to be checked
* Return: 1 if lowercase, 0 when otherwise
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
