#include <stdio.h>

/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	char smallLetter = 'a';

	while (smallLetter <= 'z')
	{
		if (!(smallLetter == 'e' || smallLetter == 'q'))
		{
			putchar(smallLetter);
		}

		smallLetter++;
	}

	putchar('\n');
	return (0);
}
