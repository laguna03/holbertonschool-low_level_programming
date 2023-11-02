#!/bin/bash
#include "main.h"
/**
 * _strspn - Get the lengh of a prefix substring
 * @s: array base
 * @accept: substring
 * Return: number of bytes in the initial segment of s
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
	if (!accept[j])
	{
		break;
	}
	}
return (i);
}
