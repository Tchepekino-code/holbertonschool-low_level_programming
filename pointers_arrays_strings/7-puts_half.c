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
  int n;

  while (str[l] != ('\0'))
    l += 1;
  l -= 1;
  m = (l / 2);
  n = (m - 1);
  if ((m % 2) == 0)
    {
      for (m <= l)
	{
	_putchar(str[m]);
	}
      m += 1;
    }
      else
	{
	  for (n <= l)
	    _putchar(str[n]);
		     n += 1;
	 }
      _putchar('\n');
}
