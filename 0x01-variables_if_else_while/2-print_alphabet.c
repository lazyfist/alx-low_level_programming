#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char smallLetter;

	for (smallLetter = 97; smallLetter <= 122; smallLetter++)
	{
		putchar(smallLetter);
	}
	putchar('\n');
	return (0);
}
