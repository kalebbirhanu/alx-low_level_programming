#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (succes)
 */
/* more headers goes there */



int main(void)
{
		int n;
		int k;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
				k = n % 10;
		if (k > 5)
		{
			printf("last digit of %d is and is greater than 5\n", k);
		}
		else if (k == 0)
		{
			printf(" last digit of %d is k and is 0 \n ", k);
		}
		else
		{
				printf(" last digit of %d is and is less than 6 and not 0 \n ", k);
			}
					return (0);
}

