#include <stdio.h>

/**
* main - prints the numbers from 1 to 100, followed by a new line.
*       But for multiples of three print Fizz instead of the number
*       and for the multiples of five print Buzz.
*       For numbers which are multiples of both three and five print FizzBuzz.
*
* Return: nothing
*/
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i > 1)
			printf(" ");
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		i++;
	}
	printf("\n");

	return (0);
}

