#include "main.h"
#include <unistd.h>
/**
*times_table - prints a multiplication table
*/
void times_table(void)
{
int table_no = 0;
int multi_no = 0;
int result = 0;
while (table_no <= 9)
{
while (multi_no <= 9)
{
result = table_no * multi_no;
if (result >= 10)
{
_putchar('0' + (result / 10));
_putchar('0' + (result % 10));
_putchar(',');
_putchar(' ');
}
else
{
_putchar('0' + result);
_putchar(',');
_putchar(' ');
}
multi_no++;
if (multi_no > 9)
{
_putchar('\n');
break;
}
}
table_no++;
if (table_no > 9)
break;
}
}
