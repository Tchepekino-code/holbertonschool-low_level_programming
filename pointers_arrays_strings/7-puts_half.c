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

  if ((l /2 ) % 2) == 0)
    {
      for (m = (l / 2);m <= l ;m++)
	_putchar(str[m]);
    }
      else
	{
	  for (n = ((l /2) + 1);n <= l;n++)
	    _putchar(str[n]);
	 }
  _putchar('\n');
}
