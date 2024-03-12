#include <stdio.h>
#include <string.h>



int main()


{
	int number;


	for (number = 0; number <= 100; number++)

	{ 
		if ((number % 3 == 0) && (number % 5 == 0))

		{

			
			printf("%s\n", "FizzBuzz");
		
		}

		else if ((number % 3 == 0))
		
		{
			printf("%s\n", "Fizz");

		
		}
		else if ((number % 5 == 0))
		
		{
			printf("%s\n", "Buzz");

		}
		else	{

			printf("%d\n", number);

		}
	}
	return (0);
}
