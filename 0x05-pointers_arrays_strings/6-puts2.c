#include"main.h"
/**
* puts2 - function that prints every other character
* @str: string input
*/
void puts2(char *str)
{
int length = 0;
int t = 0;
char *y = str;
int o;
while (*y != 0)
{
y++;
length++;
}
t = length - 1;
for (o = 0; o % 2 == 0 <= t; o++)
{
if (o % 2 == 0)
{
_putchar(str[o]);
}
}
_putchar('\n');
}
