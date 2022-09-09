#include <stdio.h>

/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
	char smallLetter;
	char largeLetter;

	for (smallLetter = 97; smallLetter <= 122; smallLetter++)
	{
		putchar(smallLetter);
	}

	for (largeLetter = 'A'; largeLetter <= 'Z'; largeLetter++)
	{
		putchar(largeLetter);
	}
	putchar('\n');
	return (0);
}
