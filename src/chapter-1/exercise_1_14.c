/* Write a program to print a histogram of the frequencies of different
   characters in its input. */

#include <stdio.h>
#include <ctype.h>

#define IN 1
#define OUT 0
#define MAXLENGTH 15
#define MAXCHAR 128

int main()
{
	int i, c, maxval, count;
	int cc[MAXCHAR];

	for (i = 0; i < MAXCHAR; ++i)
		cc[i] = 0;

	while ((c = getchar()) != EOF)
		if (c < MAXCHAR)
			++cc[c];

	maxval = 0;
	for (i = 0; i < MAXCHAR; ++i)
		if (cc[i] > maxval)
			maxval = cc[i];

	for (i = 0; i < MAXCHAR; ++i)
	{
		if (isprint(i))
			printf("%6d - %c - %6d", i, i, cc[i]);

		else 
			printf("%6d -  - %6d", i, cc[i]);

		if (cc[i] > 0)
		{
			if((count = cc[i] * MAXLENGTH / maxval) <= 0)
				count = 1;
		}

		else 
		{
			count = 0;
		}

		while ( count > 0)
		{
			printf("*");
			--count;
		}
		printf("\n");
	}
	return 0;
}