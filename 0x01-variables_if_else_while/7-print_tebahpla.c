#include <stdio.h>
/**
 * main - Main function
 * Description: Print alphabet lowercase in reverse, new line"
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar(10);
	return (0);
}
