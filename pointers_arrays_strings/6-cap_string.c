#include "main.h"
/**
 *cap_string - capitalizes the first letter of each word in a string
 *
 *@str: pointer to the string
 *Return: pointer to the resulting string
 */

char *cap_string(char *str)
{
    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
        {
            if (*(str - 1) == ' ' || *(str - 1) == '\t' ||
                *(str - 1) == '\n' || *(str - 1) == ',' || *(str - 1) == ';' ||
                *(str - 1) == '.' || *(str - 1) == '!' || *(str - 1) == '?' ||
                *(str - 1) == '"' || *(str - 1) == '(' || *(str - 1) == ')' ||
                *(str - 1) == '{' || *(str - 1) == '}')
            {
                *str = *str - ('a' - 'A');
            }
        }
        str++;
    }
    return (str);
}