#include "main.h"
#include <stdio.h>
/**
 * main - take the fizz-buzz challenge
 * Return: Return 0 on success
 */
int main(void)
{
	int num;

	for (num = 1; num < 101; num++)
	{

		if (num % 5 == 0 && num % 3 == 0)
			printf("FizzBuzz ");
		else if (num % 5 == 0)
			if (num == 100)
				printf("Buzz ");
			else
				printf("Buzz ");
		else if (num % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", num);
	}
	printf("\n");
	return (0);
}
