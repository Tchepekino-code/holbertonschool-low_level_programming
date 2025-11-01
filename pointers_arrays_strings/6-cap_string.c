#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: pointer to the string to modify
 *
 * Return: pointer to the modified string
 *
 * Description: 
 * Capitalizes the first letter of each word in the string.
 * Words are separated by spaces, tabs, newlines, and the
 * following characters: ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'.
 */
char *cap_string(char *s)
{
int i = 0;
char sep[] = " \t\n,;.!?\"(){}";

if (s[0] >= 'a' && s[0] <= 'z')
s[0] -= 32;

while (s[i] != '\0')
{
int j;

for (j = 0; sep[j] != '\0'; j++)
{
if (s[i] == sep[j] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
s[i + 1] -= 32;
}
i++;
}
return (s);
}
