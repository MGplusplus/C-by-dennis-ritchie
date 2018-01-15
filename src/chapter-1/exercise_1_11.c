/* How would you test the word count program? What kinds of input are
   most likely to uncover bugs if there are any? */

#include <stdio.h>

int main()
{
	int c, nc, state;

	nc = 0;
	state = 0;
/* 
	Set of inputs could be 1. one word per line 2. one character per line
	3. only spaces or tabs or new line characters 4. multiple spaces after each word
	5. word starts with a space

	code below works fine on all these different inputs
*/
	while ((c = getchar()) != EOF)
	{
		if (c != ' ' && c != '\t' && c != '\n')
		{				
			if (state == 0)
			{
				++nc;
				state = 1;
			}
		}
		else {
		    	state =0;
		}
	}

	printf("Total words: %d \n", nc);

	return 0;
}