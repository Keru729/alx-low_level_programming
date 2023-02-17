#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line
 * Return: 0
 */
int main(void)
{
	char c = 'o';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

