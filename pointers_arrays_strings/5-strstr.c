#include "main.h"

/**
 * _strstr - locates the first occurrence of a substring in a string
 * @haystack: pointer to string
 * @needle: pointer to substring
 * Return: pointer to the first occurrence of , or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int i, j;

if (*needle == '\0')
return (haystack);

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
break;
}
if (needle[j] == '\0')
return (haystack + i);
}
return (NULL);
}
