#include "main.h"
/**
 * main - print_alphabet
 * Return: 0
 */
int main(void)
{
	print_alphabet();

	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
	return (0);
}
