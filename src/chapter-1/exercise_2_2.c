/* Write a loop equilent to the for loop above without using && or ||.
   for (i = 0;; i < lim-1 && (c = getchar()) != '\n' && c != EOF; ++i) */

#include <stdio.h>

#define MAXCHAR 100

int main()
{

	int i = 0;
	int lim = MAXCHAR;
	int c;
	char s[MAXCHAR];

	while (i < (lim - 1))
	{
		c = getchar();

		if (c == EOF)
			break;

		else if (c == '\n')
			break;

		s[i++] = c;
	}

	s[i] = '\0';   /* terminate the string */

	return 0;
}
