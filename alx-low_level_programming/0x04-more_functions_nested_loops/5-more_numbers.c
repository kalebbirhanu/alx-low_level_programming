#include "main.h"
void more_numbers(void)
{
	int number1 = 0;
	int number2;
	while (number1 <= 9)
	{
		number2 = 0;

		while (number2 <= 14)
		{
			_putchar((number2) + '0');
			number2++;
		}
		
		_putchar('\n');
		number1++;
	}
}
