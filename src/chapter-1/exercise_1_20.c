/* Write a program detab that replaces tabs in the input with the proper
   number of blanks to space to the next tab stop. Assume a fixed set of
   tb stops, say every n columns. Should n be a variable or a symbolic
   parameter ? */

#include <stdio.h>

#define TABLEN 8

int main ()
{
	int c, nb;
	int pos = 0;

	nb = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
		{
			nb = (TABLEN - (pos - 1) % TABLEN);

			while (nb > 0)
			{
				putchar(' ');
				++pos;
				--nb;
			}
		}
		else if ( c == '\n')
			putchar(c);

		else
		{
			putchar(c);
			++pos;
		}
	}
	return 0;
}