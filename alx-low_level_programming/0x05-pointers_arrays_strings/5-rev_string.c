#include "main.h"
#include <string.h>


void rev_string(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s--;

	}

	_putchar('\n');


}
