#include "main.h"

/**
 * _strcat - retourne la longueur d'une chaîne de caractères
 * @dest: string to append
 * @src: destinated string
 *
 * Return: char, pointeur vers la resukt string dest
 */
char *_strcat(char *dest, char *src)
{
char *p = dest;

while (*p != '\0')
{
p++;
}
while (*src != '\0')
{
*p = *src;
p++;
src++;
}
*p = '\0';
return (dest);
}
