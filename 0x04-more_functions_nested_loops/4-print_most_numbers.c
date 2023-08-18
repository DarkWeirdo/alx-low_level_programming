#include "main.h"
/**
 * print_most_numbers - print numbers from 0 to 9 except 2 and 4
 * Return: 0 as needed
*/
void print_most_numbers(void)
{
int num;
for (num = 48; num <= 58; num++)
{
if (num != 50)
{
if (num != 52)
{
_putchar(num);
}
}
}
}
