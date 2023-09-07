#include "main.h"
/**
*_memcpy -  function copies from memory area src to memory area dest
*@dest: points to the memory area that will be copied to
*@src: points to the memory area that will be copied from
*@n: number of bytes to be used
*Return: returns destintaion memory area
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int r;
int i = n;
for (r = 0; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
