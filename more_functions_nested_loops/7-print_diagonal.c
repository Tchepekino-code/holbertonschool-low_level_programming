#include "main.h"

/**
 * print_diagonal -  function that draws a diagonal line on the terminal.
 * @n: the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
  int i;

if (n > 0 )
{
 
for (i = 0; i < n; i++){
int j = 0;
_putchar(92);
_putchar('\n');
 {
  while (j < i)
{
j++;
_putchar(' ');
 }
 }
}
}

else 
_putchar('\n');
}
