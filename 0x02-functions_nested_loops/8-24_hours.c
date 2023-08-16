#include "main.h"
#include <unistd.h>
/**
*jack_bauer - prints the every minute
*/
void jack_bauer(void)
{
int hr = 0;
int min = 0;
while (hr <= 23)
{
while (min <= 59)
{
_putchar('0'+(hr/10));
_putchar('0'+(hr%10));
_putchar(':');
_putchar('0'+(min/10));
_putchar('0'+(min%10));
_putchar('\n');
min++;
if (min > 59)
{
min = 0;
break;
}
}
hr++;
if (hr > 23)
break;
}
}
