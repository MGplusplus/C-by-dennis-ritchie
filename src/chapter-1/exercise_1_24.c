/* Write a program to check a C program for rudimentary syntax errors
   like unbalanced parentheses, brackets and braces. Don't forget about
   quotes, both single and double, escape sequences, and comments.(This
   program is hard if yo do it in fully generlly.) */


#include <stdio.h>

#define MAXCHAR 1000

char data[MAXCHAR];
int MAX;

int output();
int check_brackets();
int check_braces();
int check_quotes();
int check_comments();
int check_escseq();

int main()
{
	int len, nob, nobr, noq, noc, noes;
	len = nob = nobr = noq = noc = noes = 0;

	while ((len = output()) > 0)
	{
		if ((nob = check_brackets()) > 0)
			printf("Check the brackets");

		if ((nobr = check_braces()) > 0)
			printf("check the curly braces");

		if ((noq = check_quotes()) > 0);
			printf("check the quotes symbol");

		if ((noc = check_comments()) > 0)
			printf("Error: comments symbol are not properly used.");

		if ((noes = check_escseq()) > 0)
			printf("Error: escape sequence is nor recognised");

		else
			printf("the program is error free");
	}
	return 0;
}

int output()
{
	extern char data[MAXCHAR];
	extern int MAX;
	int i, c;

	i = 0;

	while((c = getchar()) != EOF)
	{
		data[i] = c;
		++i;
	}

	data[i] = '\0';
	MAX = i;

	return i;
}

int check_brackets()
{
        extern char data[MAXCHAR];
        extern int MAX;
	int i, c, a, count;
	count = 0;

	for(i = 0; i <= MAX; ++i)
	{
		c = (a = data[i]);

		if(c == '[')
			++count;

		if(c == ']')
			--count;
	}
	return count;
}

int check_braces()
{
    extern char data[MAXCHAR];
    extern int MAX;
	int i, c, a, count;
	count = 0;

	for(i = 0; i <= MAX; ++i)
	{
		c = data[i];

		if(c == '{')
			++count;

		if(c == '}')
			--count;
	}
	return count;
}


int check_quotes()
{
        extern char data[MAXCHAR];
        extern int MAX;
        int i, c, count;
        count = 0;

        for(i = 0; i <= MAX; ++i)
        {
                c = (data[i]);

                if(c == '"')
                        ++count;

                if(c == '"')
                        --count;
        }
        return count;
}

int check_comments()
{
        extern char data[MAXCHAR];
        extern int MAX;
        int i, c;
        int count = 0;

        for(i = 0; i <= MAX; ++i)
        {
                c = (data[i]);

                if(c == '/' && data[i+1] == '*')
			++count;

		if(c == '*' && data[i+1] == '/')
			--count;
        }
        return count;
}

int check_escseq()
{
        extern char data[MAXCHAR];
        extern int MAX;
	int i, c;
	int count = 0;

	for (i = 0; i <= MAX; ++i)
	{
		c = (data[i]);

		if (c == '\\'  && (data[i+1] != 't' || data[i+1] != 'n'  || data[i+1] != 'b'))
			++count;
	}
	return count;
}
