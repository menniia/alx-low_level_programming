#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase, followed by a new line
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
	for (upper = 'A'; upper <= 'Z', upper++)
	{
		putchar(upper);
	}
	putchar('\n');
	return (0);
}

