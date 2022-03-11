#include <stdio.h>
/**
 * main - main function
 * Description: Prints out alphabet in lower case then new line
 * Return: 0
 */
int main (void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
			continue;
		putchar(c);
	}
	putchar(10);
	return (0);
}
