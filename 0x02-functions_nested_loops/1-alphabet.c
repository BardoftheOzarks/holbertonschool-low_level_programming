#include <unistd.h>
int print_alphabet(char c)
{
	for(c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return(0);
}
