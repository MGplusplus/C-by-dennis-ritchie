/* Write a program to "fold" long input line into two or more shorter
   lines after the last non-blank character that occurs before the n-th
   column of input. Make sure your program does something intellgent
   with very long lines, and if there are no blanks or tabs before the
   specified column. */


#include <stdio.h>

#define MAXLINE 1000

char line[MAXLINE];

int output();

int main()
{
 int t, len;
 int location, spaceholder;
 const int FOLDERLENGTH = 70;

 while ((len = output()) >  0)
   {
 	if (len < FOLDERLENGTH)
	{
	}
	else
	{
	  t = 0;
	  location = 0;
	  while (t < len)
	   {
 	       if (line[t] == ' ')
	         spaceholder = t;

	       if (location == FOLDERLENGTH)
	        {
	         line[spaceholder] = '\n';
	         location = 0;
	        }
	       location++;
	       t++;
	    }
         }
	 printf("%s", line);
       }
    return 0;
}

int output(void)
{
 int c, i;
 extern char line[];

 for (i = 0; MAXLINE - 1 && ( c = getchar()) != EOF && c != '\n'; ++i)
   line [i] = c;
 if (c =='\n')
    {
     line[i] = c;
     ++i;
    }
  line [i] = '\0';
 return i;

}
