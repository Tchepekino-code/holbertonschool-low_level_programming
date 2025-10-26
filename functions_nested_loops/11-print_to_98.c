#include "main.h"

void print_to_98(int n)
{
  for (n < 98; n++)
    {
    _putchar(n + '0');
    if (n == 97)
      break;
    _putchar(',');
    _putchar(' ');
    }
  for (n > 98; n--)
    {
      _putchar(n + '0');
      if (n == 99)
	break;
      _putchar(',');
      _putchar(' ');
    }
  for (n == 98)
    _putchar('98');
}

