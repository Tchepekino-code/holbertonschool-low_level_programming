#include "main.h"

/**
 * string_toupper -changes all lowercase letters of a string to uppercase.
 * @char: pointeur vers la chaîne 
 *
 * Return: Uppercase string
 */
char *string_toupper(char *)
{
  int i;

  for (i = 0; i < '\0'; i++)
    {
      if (char[i] >= 97 && char [i] <= 122)
	{
	tmp = char[i];
      char[i] = (tmp -26);
	}
	else
	  continue;
    }
  return (char);
}
