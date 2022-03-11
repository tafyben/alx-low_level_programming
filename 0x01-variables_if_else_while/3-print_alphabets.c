#include <stdio.h>
/**
 * main - main block
 * Description: Print alhabet lowercase and uppercase followed by a new line
 * Return:0
 */
int main(void)
{
	char c, d;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (d = 'A'; d <= 'Z'; d++)
	{
		puthcar(d);
	}

	putchar(10);
	return (0);
}
