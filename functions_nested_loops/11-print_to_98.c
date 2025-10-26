#include "main.h"

void print_to_98(int n)
{
  while (n < 98)
    {
    _putchar(n + '0');
    n++;
    if (n == 97)
      break;
    _putchar(',');
    _putchar(' ');
    }
  while (n > 98)
    {
      _putchar(n + '0');
      n++;
      if (n == 99)
	break;
      _putchar(',');
      _putchar(' ');
    }
  for (n == 98)
    _putchar('98');
}

