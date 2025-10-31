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

while (*src != '\0')
{
src++;
}
while (*dest != '\0')
{
*src = *dest;
src++;
dest++;
}
*src = '\0';
return (dest);
}
