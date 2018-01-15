/*Write a program to copy its input to its output, replacing each tab by \t,
 each backspace by \b, and each backslash by \\. This makes tabs and
 backspaces visible in an unambiguous way. */

 #include <stdio.h>

 int main()
 {
 	int c;

 	while ((c = getchar()) != EOF)
 		{
 			if (c == '\t')  // tab character check
 			{
 				printf("\\t");
 			}
 			else if (c == '\b')  // backspaces character check
 			{
 				printf("\\b");
 			}
 			else if (c == '\\')  /*extra backslash required to read
 								 a backlash character. */
 			{
 				printf("\\\\");
 			}
 			else
 				putchar(c); 			
 		}
 	return 0;
 }
