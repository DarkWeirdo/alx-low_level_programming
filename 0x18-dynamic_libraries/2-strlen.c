#include "main.h"
/**
* _strlen - function to calculate string length
* @s: pointer to point at each string array element
* Return: return full length
*/
int _strlen(char *s)
{
int length = 0;
while (*s != 0)
{
length++;
s++;
}
return (length);
}
