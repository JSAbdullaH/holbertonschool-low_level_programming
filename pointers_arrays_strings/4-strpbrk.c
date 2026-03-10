#include "main.h"

/**
 * _strpbrk - locates the first occurrence of any character from a set 
 * @s: pointer to string
 * @accept: pointer to accepted characters
 * Return: pointer to the first occurrence of any or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
return (s + i);
}
}
return (NULL);
}
