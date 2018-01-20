/* Write a program entab that replaces strings of blanks by the minimum number of
   tabs and blanks to achieve the same spacing. Use the same tab stop as for detab,
   When either a tab or a single blank would be suffice to reach a tab stop, which
   would be given preference ? */

#include <stdio.h>

#define TABLEN 8

int main()
{
	int c, j, pos;
	int nb =0,nt=0;
	int i = 0;

	for(pos=1; (c=getchar())!= EOF ; ++pos)
	{
		if (c == ' ')
		{
			if ( pos%TABLEN != 0)
			{
				++nb;
			}
			else
			{
				nb=0;
				++nt;
			}
		}
		else{

			for (; nt>0 ; --nt )
				putchar('\t');

			if (c== '\t')
				nb=0;
			else
				for (; nb>0; --nb)
					putchar(' ');

			putchar(c);

			if (c == '\n')
				pos=0;
			else if (c == '\t')
				pos = pos + ( TABLEN - (pos -1) % TABLEN)-1;
		}
	}
		
	return 0;
}