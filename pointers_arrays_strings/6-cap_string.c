#include "main.h"

/**
 * char *cap_string(char *) - function that capitalizes all words of a string.
 * @str: chaine a capitaliser
 *
 * Return: chaine capitalisée
 */
char *cap_string(char *s)
{
  int i = 0;

  while (s[i] != '\0')
    {
      if (s[i] = (44 || 59 || 46 || 33 || 63 || 34 || 40 || 41 || 123 || 125) && s[i+2] >= 'a' && s[i+2] <= 'z')
	{
	  s[i+2] = s[i+2] - 32;
	  i++;
	  }
      else
	i++;

    }
  return (s);
}
