#include "main.h"
/**
 *_string_toupper - converts a string to uppercase
 *
 *@s: pointer to the string
 *Return: pointer to the resulting string
 */
char *string_toupper(char *s)
{
    int i = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        s[i] = s[i] - 32;
    }
    return (s);
}
