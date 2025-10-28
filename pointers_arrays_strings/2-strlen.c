#include "main.h"

/**
 * _strlen - return the lenght of a string
 * @*s: le string
 *
 * Cette fonction nous donne la longueur du string
 */
int _strlen(char *s)
{
int len = 0
while (s[len] != '\0')
{
len++;
}
return len;
}
