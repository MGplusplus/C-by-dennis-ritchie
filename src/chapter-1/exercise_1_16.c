/* Revise the main routine of the longest-line program so it will correctly
   print the length of arbitrarily long input line, and as much as possible 
   of the text.*/

#include <stdio.h>

#define MAXLINE 1000

int getline1(char [], int );
void copy(char to[], char from[]);

main()
{
	int max, len;
	char line[MAXLINE];
	char longest[MAXLINE];

		max = 0;
	while ((len = getline1(line, MAXLINE)) > 0)
	{
		printf("%d, %s",len, line );
		if (len > max)
		{
			max = len;
			copy(longest, line);
		}
	}
		if (max > 0)
			printf("%s", longest);

	return 0;
}

	int getline1(char s[], int lim)
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

	void copy(char to[], char from[])
	{
		int j = 0;

		while ((to[j] = from[j]) != '\0')
			++j;
	}
