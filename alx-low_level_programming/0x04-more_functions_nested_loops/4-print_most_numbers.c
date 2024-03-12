#include "main.h"


void print_most_numbers(void)

{
	
	int number;


	
	for (number = 0; number <= 9; number++)
	
	
	{	
		
		_putchar((number % 10) + '0');
		
		
		if (number == 2 && number == 4)
				continue;
	}
	

	
	_putchar('\n');


}
