#include "variadic_functions.h"
#include <stdio.h>

/**
 *print_strings - prints strings, followed by a new line.
 *
 *@separator: seprator to print between strings
 *@n: number of strings to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *st;

	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		st = va_arg(list, char*);
		if (st == NULL)
			printf("(nil)");
		else
			printf("%s", st);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
