#include <stdio.h>
/**
 * main - program that prints either number or ..
 * @void: No parameter
 * Return: Return 0 on success
 */
int main(void)
{
	int num,

	while (num++ < 100)

		if ((num % 3 == 0) && (num % 5 == 0))
			printf("FizzBezz");
		else if ((num % 3) == 0)
			printf("Fizz ");
		else if ((num % 5) == 0)
		{
			if (num != 100)
				printf("Buzz ");
			else
				printf("Buzz ");
		}
		else
			printf("%d ", num);
	printf("\n");
	return (0);
}
