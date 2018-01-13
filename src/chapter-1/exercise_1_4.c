/* Write a program to print the corresponding Celsius to Fahrenheit table */

#include <stdio.h>

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;		// lower limit of temperature 
	upper = 300;    // upper limit 
	step = 20;      // step size 

	celsius = lower;

	printf("Celsius-Fahrenheit Table \n");  //prints the heading of the table

	while(celsius <= upper)
	{
		fahr = celsius * 9.0 / 5.0 + 32;

		printf("%3.0f %6.1f\n", celsius, fahr);
		
		celsius = celsius + step;
	}
}