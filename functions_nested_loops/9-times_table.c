#include "main.h"

void times_table(void){

  int i;
  int j;
  int k;
  for (k = 0; k <= 9; k++)
    {
    _putchar('0');
    _putchar(',');
    _putchar(' ');
      }
  _putchar('\n');
  for (i = 0; i <= 9; i++)
    {
    _putchar('0');
    _putchar(',');
    _putchar(' ');
    {
    for (j = 1; j <= j * 9 ; j = j + j)
      {
      _putchar(j +'0');
      _putchar(',');
      _putchar(' ');
    }
    }
    _putchar('\n');
  }
  }
