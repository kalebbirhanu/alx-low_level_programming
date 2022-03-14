#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (succes)
 */
/* more headers goes there */


int main(void)
{ for (int x = 'A'; x <= 'Z'; x++) // jumps from 'A'(65) to 'B'(66) to ... in order.
	{
		putchar(tolower(x)); // the return value is returned as a parameter
			        }
	}
		return (0);
}
