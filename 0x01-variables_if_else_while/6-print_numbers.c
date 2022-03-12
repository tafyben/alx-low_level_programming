#include <stdio.h>
/**
 * main - Main function
 * Description: Prints numbers followed by a new line
 * Return: 0
 */
int main (void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	putchar(10);
	return(0);
}
