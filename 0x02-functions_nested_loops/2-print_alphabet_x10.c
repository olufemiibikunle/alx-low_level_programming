#include "main.h"
/**
* print_alphabet_x10 -Prints the alphabet 10 times.
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
int n, co;

co = 0;

while (co < 10)
{

for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
co++
_putchar('\n');
}
}
