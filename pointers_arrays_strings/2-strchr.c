#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: character to locate
 * Return: pointer to first occurrence  or NULL if not found
 */
char *_strchr(char *s, char c)
{
    while (*s != '\0')
    {
        if (*s == c)
            return (s);
        s++;
    }
    /* handles the case where c == '\0' */
    if (*s == c)
        return (s);
    return (NULL);
}