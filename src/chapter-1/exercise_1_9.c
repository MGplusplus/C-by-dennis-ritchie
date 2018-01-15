/* Write a program to copy its input to its outout, replacing each string of one
  or more blanks by a single blanks. */

  #include <stdio.h>

  int main()
  {
  	int c;
  	int status = 0;

  	while ((c = getchar()) != EOF)
  	{
  		if (c == ' ' || c == '\t')
  		{
  			if (status == 0)
  			{
  				putchar(' ');
  				status = 1;
  			}
  		}
  		else{
  			putchar(c);
  			status = 0;
  		}

  	}

  }