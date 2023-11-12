#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function to concatinate 2 strings
 * @s1: array 1
 * @s2: array 2
 * @n: n of bytes
 * Return: new memory space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *p;
    unsigned int sizes1, i, j;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    sizes1 = strlen(s1);

    // Allocate memory for both strings and null terminator
    p = malloc(sizes1 + n + 1);
    if (p == NULL)
    {
        return (NULL);
    }

    // Copy s1 to p
    for (i = 0; i < sizes1; i++)
    {
        p[i] = s1[i];
    }

    // Concatenate n characters from s2 to p
    for (j = 0; j < n && s2[j] != '\0'; j++)
    {
        p[i] = s2[j];
        i++;
    }

    // Null-terminate the result
    p[i] = '\0';

    return (p);
}
