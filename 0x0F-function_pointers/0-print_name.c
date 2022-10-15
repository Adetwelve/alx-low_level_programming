#include "function_pointers.h"

/**
 *print_name - print a name.
 *@name: the name
 *@f: func to print name
 */
void print_name(char *name, void (*f) (char *))
{
	if (name && f)
		f(name);
}
