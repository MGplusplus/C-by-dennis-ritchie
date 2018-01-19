/* write a function reverse(s) that reverse the character string s. Use it to
   write a program that reverses its input a line at a time. */

#include <stdio.h>

#define MAXCHAR 1000

int checkline (char [], int);
int reverse (char []);

int main()
{
	char line[MAXCHAR];
 	
	while ((checkline(line, MAXCHAR)) > 0)
	{
		reverse(line);
		printf("%s", line);
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

	int reverse(char s[])
	{
		int i, j;
		char temp;

		i = 0;

		while (s[i] != '\0')
			++i;

		--i;

		if (s[i] == '\n')
			--i;

		j = 0;

		while (j < i)
		{
			temp = s[j];
			s[j] = s[i];
			s[i] = temp;
			--i;
			++j;

		}
	}