#include "main.h"
#include <stdio.h>
/**
* main - prints numbers 1 - 100 and a new line
* for multiples of 3, replace with Fizz
* for multiples of 5, replace with Buzz
* for multiples of 5 and 3, replace with FizzBuzz
* Return: 0 when successful
*/
int main(void)
{
int count;
for (count = 1; count <= 100; count++)
{
if (count % 3 == 0 && count % 5 != 0)
{
printf("Fizz");
}
else if (count % 5 == 0 && count % 3 != 0)
{
printf("Buzz");
}
else if (count % 3 == 0 && count % 5 == 0)
{
printf("FizzBuzz");
}
else if (count == 1)
{
printf("%d", count);
}
else
printf("%d", count);
putchar(' ');
}
printf("\n");
return (0);
}
