#include "main.h"

/**
 * puts2 -prints every other character of a string
 * @str: pointeur vers la chaîne dont on veut connaître la longueur
 *
 */
void puts2(char *str)
{
  int l = 0;

  while(str[l] != '\0')
    {
      if (l % 2 == 0)
      _putchar(str[l]);
      l+=1;
    }
  _putchar('\n');
}
