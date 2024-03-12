#include "main.h"
void times_table(void)
{
	int row;
	int column;
	int multiple;
	for (row = 0; row <= 9; row++)
	{
	for (column = 0; column <= 9; column++)
	{
		multiple = (row * column);
		_putchar((multiple) + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
	}
}
