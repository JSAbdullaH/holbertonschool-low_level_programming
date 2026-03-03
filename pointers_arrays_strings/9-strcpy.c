#include "main.h"

/**
 *_strcpy - copy a string from src to dest
 *
 *@dest: pointer to destination string
 *@src: pointer to source string
 *Return: pointer to destination string
 */
char *_strcpy(char *dest, char *src)
{
    char *og = dest;
    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return og;
}