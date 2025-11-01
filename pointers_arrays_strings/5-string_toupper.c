#include "main.h"

/**
 * string_toupper -changes all lowercase letters of a string to uppercase.
 * @char: pointeur vers la chaîne 
 *
 * Return: Uppercase string
 */
char *string_toupper(char *str)
{
  int i;
  int tmp;

  for (i = 0; i != '\0'; i++)
    {
      if (str[i] >= 97 && str[i] <= 122)
	{
	tmp = str[i];
      str[i] = (tmp -32);
	}
	else
	  continue;
    }
  return (str);
}
