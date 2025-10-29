#include "main.h"

/**
 * rev_string - inverse une chaîne de caractères
 * @s: pointeur vers la chaîne de caracteres
 *
 */
void rev_string(char *s)
{
  int i = 0;
  int l = 0;
  char tmp;

  while (s[l] != 0)
    l++;
  l--;
  while (l > i){
    tmp = s[i];
    s[i] = s[l];
    s[l] = tmp;
    i++;
    l--;
	    }
}
