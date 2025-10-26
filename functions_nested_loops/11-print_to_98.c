#include "main.h"

void print_to_98(int n)
{
for (; n <= 97; n++){
if (n < 0){
_putchar('-');
n = -n;
if (n / 10 != 0)
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
n = -n;
}
else if (n >= 0)
{
if (n / 10 != 0)
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
}
_putchar(',');
_putchar(' ');
}

for (; n >= 99; n--)
{
if (n / 100 != 0)
_putchar(n / 100 + '0');
if (n / 10 != 0)
_putchar((n / 10 )% 10 + '0');
_putchar(n % 10 + '0');
_putchar(',');
_putchar(' ');
}
_putchar('9');
_putchar('8');
_putchar('\n');
}

