#include "main.h"
/**
* more_numbers - print 0 -14 ten times using only _putchar three times
*/
void more_numbers(void)
{
int row, count;
for (row = 0; row < 10; row++)
{
for (count = 0; count <= 14; count++)
{
if (count > 9)
_putchar((count / 10) + '0');
_putchar((count % 10) + '0');
}
_putchar('\n');
}
}
