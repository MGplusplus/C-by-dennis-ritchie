/* Verify that the expression getchar() != EOF is 0 or 1. */

#include <stdio.h>

int main()
{

  printf(" getchar() != EOF evaluates to %d\n", getchar() != EOF);

  /* if we enter any input other than Cntrl + d in the program, it will evaluate to 
   	 the value 1, otherwise 0 */

  return 0;
}
	