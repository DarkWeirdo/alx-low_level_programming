#include "main.h"
#include <unistd.h>
/**
*main - main function of task
*print_alphabet - a while loop the uses _putchar to print the alphabet
*Return: 0 as requested
*/
void print_alphabet(void)
{
char letter = 'a';
while (letter >= 'a' && letter <= 'z')
{
_putchar(letter);
++letter;
}
_putchar('\n');
}
