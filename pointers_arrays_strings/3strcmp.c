#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: chaine 1
 * @s2: chaine 2
 *
 * Return: 15 si s1 > s2 0 si egal sinon -15
 */
int _strcmp(char *s1, char *s2)
{

int i = 0;
{
while (s1[i] != '\0' && s2[i] != '\0')
{

if ((s1[i] - s2[i]) < 0)
return (-15);
else if ((s2[i] - s1[i]) < 0)
return (15);
else
i++;
}
if (s1[i] == '\0' && s2[i] == '\0')
return (0);
else if ([s1] == '0')
return (-15);
else
return (15);
}
