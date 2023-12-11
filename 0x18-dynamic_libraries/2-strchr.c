#include "main.h"
/**
 * _strchr - Returns a pointer to the first occurrence of the character
 * @c: Character to be searched for at first occurance.
 * @s: String to be searched in for c.
 * Return: returns c, NULL if not found
 */
char *_strchr(char *s, char c)
{
int i = 0;
for (; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (0);
}
