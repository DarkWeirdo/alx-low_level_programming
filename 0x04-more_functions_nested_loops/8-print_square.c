#include "main.h"
/**
* print_square - prints a square
* @size: size of square required to be printed
*/
void print_square(int size)
{
int row, column;
if (size <= 0)
_putchar('\n');
else
{
for (row = 1; row <= size; row++)
{
for (column = 1; column <= size; column++)
_putchar('#');
_putchar('\n');
}
}
}
