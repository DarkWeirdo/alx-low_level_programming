#include "main.h"
/**
*_strspn - Entry point
* @s: input
* @accept: input
* Return: Always 0 (Success)
*/
unsigned int _strspn(char *s, char *accept)
{
int j;
unsigned int NBytes = 0;
while (*s)
{
for (j = 0; accept[j] ; j++)
{
if (*s == accept[j])
{
NBytes++;
break;
}
else if (accept[j + 1] == '\0')
{
return (NBytes);
}
}
s++;
}
return (NBytes);
}
