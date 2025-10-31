#include "main.h"

/**
 * _strncat -  function that concatenates two strings.
 * @dest: chaine d'origine
 * @src: string to appen
 * @n:bytes max from src
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
char *p = dest;

while (*p != '\0')
{
p++;
}
while (*src != '\0' && n > 0)
{
*p = *src;
p++;
src++;
n--;
}
*p = '\0';
return (dest);
}
