#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main main functuion
 * Description: assign a random number each time executed
 * Return: 0
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if  (last > 5)
		printf("Last dgit of %i is %i and is greater that 5\n", n, last);
	else if (last == 0)
		printf("Last digit of %i is %i and is 0\n", n, last);
	else if (last < 6)
		printf("Last digit of %i is %i and is less thatn 6 and not 0\n", n, last);

	return (0);
}
