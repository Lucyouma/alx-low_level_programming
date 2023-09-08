#include <stdio.h>
/**
 * main - Entry point function printing lower case alphabetical letters
 *
 * Return: 0 Always
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

	{
	if (letter != 'e' && letter != 'q')
	putchar(letter);
	}

	putchar('\n');

	return (0);
}
