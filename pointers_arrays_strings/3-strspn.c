#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to string
 * @accept: pointer to accepted characters
 * Return: number of characters in the prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int i, j;
    unsigned int count = 0;
    
    for (i = 0; s[i] != '\0'; i++)
    {
        int found = 0;

        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
            {
                found = 1;
                break;
            }
        }

        if (found)
            count++;
        else
            break;
    }
    return (count);
}