#include <stdio.h>
/**
 * main - Entry point printing reverse lower case alphabets with a new line
 *
 * Return: 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)

	putchar(letter);

	putchar('\n');

	return (0);
}
