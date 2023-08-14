#include <stdio.h>
/**
*main - main function of task 4 program
*Return: 0 as requested
*/
int main(void)
{
char letter = 'z';
while (letter >= 'a' && letter <= 'z')
{
putchar(letter);
letter--;
}
putchar('\n');
return (0);
}
