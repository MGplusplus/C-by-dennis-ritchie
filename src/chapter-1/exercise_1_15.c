/* write the temperatue conversion program of section 1.2 to
   use a function for conversation. */

#include <stdio.h>

int temp(int fahr)
{
	int cels;
	cels = 5 * (fahr - 32) /9;

	 return cels;
}
	
int main()
{
	int Fahr, cels, i;

	printf("Fahrenheit to Celsius conversion \n");

	for (i = 0; i <= 300; i = i+20)
	{
		printf("%6d %6d \n", i, temp(i));
	}

	return 0;
}