#!/bin/bash
#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strncpy - strncpy function
 * @dest: where its going to be copied to
 * @src: source code
 * @n: variable
 * Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}
