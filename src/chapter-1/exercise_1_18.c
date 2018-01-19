/* Write a program to remove trailing blanks and tabs from each line of input,
   and to delet entirely blank lines. */

#include <stdio.h>

#define MAXLINE 1000

int checkline(char june[], int may);
int removes(char[]);

int main()
{
	char line[MAXLINE];

	while ((checkline(line, MAXLINE)) > 0)
		if (removes(line) > 0)
			printf("%s", line);

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


	int removes (char s[])
	{
		int i = 0;

		while (s[i] != '\n')
			++i;

		--i;

		while (i >= 0 && (s[i] == ' ' || s[i] == '\t'))
			--i;

		if(i >= 0)
		{
			++i;
			s[i] = '\n';
			s[i] = '\0';
		}
		return i;
	}