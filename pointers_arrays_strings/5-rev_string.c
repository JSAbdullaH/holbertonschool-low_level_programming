#include "main.h"

/**
 *rev_string - reverse a string in place
 *
 *@s: pointer to first character of string
 *Return: void
 */

 void rev_string(char *s)
 {
    int length = 0;
    char temp;

    while (*s != '\0')
    {
        length++;
        s++;
    }

    while (length > 1)
    {
        s--;
        temp = *s;
        *s = *(s - length + 1);
        *(s - length + 1) = temp;
        length -= 2;
    }
    printf("\n");
 }