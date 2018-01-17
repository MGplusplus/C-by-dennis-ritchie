/* Write a program to print a histogram of the lengths of words in its input.
  It is easy to draw the histogram with the bars horizontal; a vertical 
  orientation is more challenging. */

  
#include <stdio.h>

#define IN 1
#define OUT 0
#define MAXLENGTH 15
#define MAXWORD 10

int main()
{
	int c, nc, i, j, state, maxchar, len, overflow;

	int count[MAXWORD];

	state = OUT;
	nc = 0;

	for (i = 0; i < MAXWORD; i++)
		count[i] = 0;

	while ((c = getchar()) != EOF)
	{
		if ((c == ' ' || c == '\n' || c == '\t'))
		{
			state = OUT;

			if (nc > 0 && nc < MAXWORD)
				++count[nc];

			else
				++overflow;
			nc = 0;
		}

		else if (state == OUT)
		{
			++nc;
			state = IN;
		}
		else 
			++nc;
	}

	maxchar = 0;
	for (i = 1; i < MAXWORD; ++i)
		if (count[i] > maxchar)
		maxchar = count[i];
	
// Vertical Histogram
	for (i = MAXLENGTH; i > 0; --i)
		{
			for (j = 1; j < MAXWORD; ++j)
				{
					if (((count[j] * MAXLENGTH) / maxchar) >= i)
						printf(" * ");
					else 
						printf("   ");
                }
			putchar('\n');
		}
			for (i = 1; i < MAXWORD; ++i)
				printf("%3d", i);

			putchar('\n');

			for (i = 1; i < MAXWORD; ++i)
				printf("%3d", count[i]);

			putchar('\n');

		

	if (overflow > 0)
			printf("please type small words \n");

	return 0;
}