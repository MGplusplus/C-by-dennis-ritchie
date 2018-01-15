// Write a program to count blanks, tabs, and newlines.

#include <stdio.h>

int main()
{
	int c, bl, tb, nl;

	bl = tb = nl = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
			++bl;

		else if (c == '\t')
			++tb;

		else if (c == '\n')
			++nl;
	}

	printf("\n Blanks = %d \n tab = %d \n newline = %d \n", bl, tb, nl);

	return 0;
}