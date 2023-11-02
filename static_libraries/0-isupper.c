#!/bin/bash
#include "main.h"
/**
 * _isupper -program to check for uppercase characters.
 * @c: varible
 * Return: Always 0.
 */
int _isupper(int c)

{
if (c >= 'A' && c <= 'Z')
	{
return (1);
	}
else
	{
return (0);
}
}
