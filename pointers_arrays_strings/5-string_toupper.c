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

  for (i = 0; i != '\0'; i++)
    {
      while (str[i] != '\0')
	{
	  if (str[i] >= 'a' && str[i] >= 'z')
	  str[i] = str[i] - 32;
	  i++;
    }
  return (str);
}
