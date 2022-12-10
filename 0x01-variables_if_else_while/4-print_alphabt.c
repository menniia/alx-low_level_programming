#include <stdio.h>

/**
 * main - print the alphabet in lowercase, except for e and q
 * Return: Always 0
 */

int main(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
			putchar(alpha);
	}
	putchar('\n);
	return (0);
}
