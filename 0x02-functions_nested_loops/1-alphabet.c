#include "main.h"

/**
 * main - print alphabet
 * Return: Always 0
 */

void print_alphabet(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		_putchar(lower);
	}
	_putchar('\n');
}
