#include "main.h"

/**
 * strcpy - copies the string pointed to by src
 * @dest: pointer to dest
 * @src: the string pointed to
 *
 * Return:  value: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
  int i;

  for (i = 0; i != '\0'; i++)
  dest[i] = src[i];


  return (dest);
}
