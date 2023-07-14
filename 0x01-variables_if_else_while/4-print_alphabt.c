#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0.
*/
int main(void)
{
	char letter;

	char ch = 'a';

	while (ch <= 'z')

	{
		if (ch != 'e' && ch != 'q')

	{
		putchar(ch);

	}
		ch++;

	}
	putchar('\n');
	return (0);
}
