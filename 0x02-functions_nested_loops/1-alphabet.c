#include "main.h"
/**
 *print_alphabet - print lowercase alphabet
 */
void print_alphabet(void)
{
	char alpha = 96;

	while (alpha < 'z')
	{
		alpha++;
		_putchar(alpha);
	}
	_putchar('\n');
}

int main(void)

{

	    print_alphabet();

	        return (0);

}
