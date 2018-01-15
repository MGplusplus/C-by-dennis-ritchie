// Write a program that prints its input one word per line.

#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
	int c;
	int status = IN;

	while((c = getchar()) != EOF)
	{
		if(c != ' ' && c != '\n' && c != '\t')  // begining or writing a word
		{
			putchar(c);
			status = OUT;
		}
		else if(status == OUT)  // finish a word
		{
			putchar('\n');
			status = IN;
		}
	}

	return 0;
}