#include "main.h"
/**
* char *_strcpy - function to copy a string
* @dest: input to be copied to
* @src: input to be copied from
* Return: returns copied string
*/
char *_strcpy(char *dest, char *src)
{
int l = 0;
int x = 0;

while (*(src + l) != '\0')
{
l++;
}
for ( ; x < l ; x++)
{
dest[x] = src[x];
}
dest[l] = '\0';
return (dest);
}
