// Write a program to print all input lines that are longer than 80 characters.

#include <stdio.h>

#define MAXCHAR 1000
#define CHECK 80


int checkline(char [], int);

int main()
{
	int i, len;
	char length[MAXCHAR];

	while ((len = checkline(length, MAXCHAR)) > 0)
	{
		if (len > CHECK)
		{
			printf("%s", length);
		}
	}

	return 0;
}


	int checkline(char s[], int lim)
	{
		int c, i, j;

		j = 0;
		
		for (i = 0; i < lim - 2 && (c = getchar()) != EOF && c != '\n'; ++i)
		{
			s[j] = c;
			++j;
		}

		if (c == '\n')
		{
			s[j] = c;
			++i;
			++j;
		}
		s[j] = '\0';

		return i;
	}
