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

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
		if (x !='9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
