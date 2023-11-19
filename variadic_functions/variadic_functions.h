#ifndef MICHA
#define MICHA
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * typdef struct - Sum, string and all
 * @let: letters
 * @va_list: variable list
 * @pick_al: all
 */

typedef struct pick
{
	char let;
	void (*f)(va_list list);
} pick_al;
#endif
