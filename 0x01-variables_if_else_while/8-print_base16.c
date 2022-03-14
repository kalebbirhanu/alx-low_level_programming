#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (succes)
 */
/* more headers goes there */


int main(void)
{
	int x;

	for (x = '0'; x <= '9';  x++)
	{
		putchar(x);
	}
	for (x = 'a'; x <= 'e';  x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
