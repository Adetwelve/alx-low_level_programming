#include "variadic_functions.h"
#include "stdio.h"

/**
 *print_numbers - print numbers followed by newline
 *@separator: the string to be printed between numbers
 *@n: count of parameter
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list nums;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(nums);
}

