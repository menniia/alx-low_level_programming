#include <stdio.h>

/**
 * main - print alphabet in lower and uppercase
 * Return: Always 0
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper)
	}
	putchar('\n');
	return (0);
}
