#include "main.h"

/**
 * char *cap_string(char *) - function that capitalizes all words of a string.
 * @str: chaine a capitaliser
 *
 * Return: chaine capitalisée
 */
char *cap_string(char *s)
{
    int i = 0;
    char sep[] = " \t\n,;.!?\"(){}";

    /* première lettre de la chaîne */
    if (s[0] >= 'a' && s[0] <= 'z')
        s[0] -= 32;

    while (s[i] != '\0')
    {
        int j;

        for (j = 0; sep[j] != '\0'; j++)
        {
            /* si s[i] est un séparateur et s[i+1] est une minuscule */
            if (s[i] == sep[j] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
                s[i + 1] -= 32;
        }
        i++;
    }

    return s;
}
