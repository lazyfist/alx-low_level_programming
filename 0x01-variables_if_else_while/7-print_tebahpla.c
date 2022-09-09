#include <stdio.h>

/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	char smallLetter = 122;

	while (smallLetter >= 97)
	{
		putchar(smallLetter);
		smallLetter--;
	}

	putchar('\n');
	return (0);
}
