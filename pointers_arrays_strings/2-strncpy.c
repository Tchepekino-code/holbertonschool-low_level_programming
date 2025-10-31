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
int i = 0;

while (i < n && *src)
{
*p++ = *src++;
i++;
}

while (i < n)
{
*p++ = '\0';
i++;
}
return (dest);
}
