#ifndef _MAIN_
#define _MAIN_
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct s_pick  - Sum, string and all
 * @let: letters
 * @va_list: variable list
 * @pick_al: all
 */

typedef struct pick_al

{
	char let;
	void (*f)(va_list list);
} pick_al;

#endif
