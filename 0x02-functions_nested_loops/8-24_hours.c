#include "main.h"
#include <unistd.h>
/**
*jack_bauer - prints the every minute
*/
void jack_bauer(void)
{
int hr = 00;
int min = 00;
while (hr <= 23)
{
while (min <= 59)
{
_putchar(hr);
_putchar(':');
_putchar(min);
min++;
}
hr++;
}
}
