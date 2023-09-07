#include "main.h"
/**
 * _strstr - finds the first occurrence of the substring
 * @haystack: pointer to the string to be scanned for substring
 * @needle: pointer to substring to scan for in the string
 * Return: returns either found occurences of needle in the haystack or NULL
*/
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *h = haystack;
char *n = needle;
while (*h == *n && *n != '\0')
{
h++;
n++;
}
if (*n == '\0')
{
return (haystack);
}

}
return (0);
}
