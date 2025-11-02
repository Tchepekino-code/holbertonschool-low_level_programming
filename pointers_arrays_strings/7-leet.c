#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Description: replaces letters a/A with 4, e/E with 3,
 * o/O with 0, t/T with 7, and l/L with 1.
 * Return: pointer to the encoded string
 */

char *leet(char *s)
{
int i, j;
char letters[] = "aAeEoOtTlL";
char numbers[] = "4433007711";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (s[i] == letters[j])
{
s[i] = numbers[j];
break;
}
}
}
return (s);
}
