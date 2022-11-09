#include <stdio.h>

/**
 * main - prints the number of arguments passed into the program
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0 upon success
 */

int main(int argc, char **argv_attribute_((unused)))
{
	printf("%d\n", argc - 1);
		return (0);
}
