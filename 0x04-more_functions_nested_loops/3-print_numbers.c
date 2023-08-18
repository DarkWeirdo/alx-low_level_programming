#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9 using _putchar only twice
 * Return: 0 as needed
*/
void print_numbers(void)
{
int num = 0;
do {
_putchar(num + 48);
num++;
} while (num >= 0 && num <= 9);
_putchar('\n');
}
