#include <stdio.h>
#include <stdlib.h>


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
