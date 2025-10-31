#include "main.h"

/**
 * _strcpy -  function that copies a string.
 * @dest: string to replace
 * @src: string to copy
 * @n: number of caracteres to copy
 *
 * Return: the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
  char *p = dest;

  while (n-- > 0 && *src)
    {
      *p++ = *src++;
    }
  
  while (n-- > 0)
    {
    *p++ = '\0';
    }
  
    return (dest);
    }
