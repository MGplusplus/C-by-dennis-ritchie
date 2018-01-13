/* Experiment to find out what happens when printf's argument string contains \c,
 where c is some character not listed above. */

#include <stdio.h>

int main()
{
	printf("hel\clo, world \n");  /* character \c when placed in string, compiler 
	                                   shows a Warning (not an Error) and it prints
	                                    helclo, world. */
	return 0;
}