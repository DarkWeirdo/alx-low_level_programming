#include <stdio.h>
/**
*main - main function of task 4 program
*Return: 0 as requested
*/
int main(void)
{
char letter = 'a';
while (letter >= 'a' && letter <= 'z')
{
putchar(letter);
++letter;
}
letter = 'A';
while (letter >= 'A' && letter <= 'Z')
{
putchar(letter);
++letter;
}
putchar('\n');
return (0);
}
