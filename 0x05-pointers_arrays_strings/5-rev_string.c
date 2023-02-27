#include "main.h"
/**
 *rev_string - swap values of variables a and b
 *
 *@s: pointer intrance
 *
 */
void rev_string(char *s)
{
	int m, length;
	char *begin, *end, temp;

	for (m = 0; s[m] != '\0'; m++)
	{}
	length = m;
	begin = s;
	end = s;
	for (m = 0; m < length - 1; m++)
		end++;
	for (m = 0; m < length / 2; m++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;
		begin++;
		end--;
}
}
