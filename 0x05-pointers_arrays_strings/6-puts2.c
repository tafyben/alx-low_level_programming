#include "main.h"
/**
 * puts2 - print string followed by newline
 * @str: pointer to the string to print.
 * Return: void
*/

void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
	if (i % 2 == 0)
	{
		_putchar(str[i]);
	}

	i++;
}
_putchar('\n');
}
