#include "main.h"

/**
 * puts_half - print the second half of the string
 * @str: pointeur vers la chaîne
 *
 */
void puts_half(char *str)
{
int l = 0;
int m;

while (str[l] != '\0')
l++;

if (l % 2 == 0)
m = l / 2;
else
m = (l - 1) / 2 + 1;
while (str[m] != '\0')
{
_putchar(str[m]);
m++;
}
_putchar('\n');
}
