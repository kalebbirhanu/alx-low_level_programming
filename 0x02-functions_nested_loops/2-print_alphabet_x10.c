#include "main.h"
/**
 * print_alphabet - Entry point
 * Description =to print alphabet letters
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
		char a;
		int i;

			a = 'a';
			i = 1;
			while (i <= 10)
			{
				while (a <= 'z')
				{
				_putchar(a);
				a++;
			}
			a = 'a';
			i++;
			_putchar('\n');
		}
}
