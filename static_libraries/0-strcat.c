#!/bin/bash
#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - Link two strings
 * @dest: The destination string
 * @src: The source string
 * Return: pointer to the linked string (dest)
 */

char *_strcat(char *dest, char *src)
{
size_t dest_len = strlen(dest);
size_t i;

	for (i = 0 ; src[i] != '\0' ; i++)
	dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}

