#include "main.h"

/**
 * print_diagonal -  function that draws a diagonal line on the terminal.
 * @n: the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
int i;
int j;
if (n != 0)
{
for (i = 0; i < n; i++){
_putchar(92);
_putchar('\n');  
for (j = 0; j < n; j++)
_putchar(' ');
}
 } 
else
_putchar('\n');
}
