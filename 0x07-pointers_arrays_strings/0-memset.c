#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte
 * @s: Pointer at memory segment to be set
 * @b: the constant byte
 * @n: the first bytes of memory are pointed by s
 * Return: Return the modified memory area
*/
char *_memset(char *s, char b, unsigned int n)
{
for (int i = 0; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
