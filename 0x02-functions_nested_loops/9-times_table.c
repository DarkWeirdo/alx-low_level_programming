#include "main.h"
#include <unistd.h>
/**
*times_table - prints a multi_noiplication table
*/
void times_table(void)
{
int table_no, multi_no, result;
for (table_no = 0; table_no <= 9; table_no++)
{
_putchar(48);
for (multi_no = 1; multi_no < 9; multi_no++)
{
_putchar(',');
_putchar(' ');
result = table_no * multi_no;
if (result <= 9)
_putchar(' ');
else
_putchar((result / 10) + 48);
_putchar((result % 10) + 48);
}
_putchar('\n');
}
}
