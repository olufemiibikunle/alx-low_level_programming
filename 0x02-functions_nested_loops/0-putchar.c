#include <main.h>
#include <stdlib.h>
#include <stdio.h>


int main(void)
{
char *sh = "alx";

while (*sh)
{
_putchar(*sh);
sh++;
}
_putchar('\n');

return (0);
}