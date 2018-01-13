/* Modify the temperature conversion program to print a heading
   above the table. */

#include <stdio.h>

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;		// lower limit of temperature
	upper = 300;    // upper limit 
	step = 20;      // step size 

	fahr = lower;

	printf("Fahrenheit-Celsius Table \n");  // prints the heading of the table

	while(fahr <= upper)
	{
		celsius = (5.0/9.0)*(fahr-32.0);

		printf("%3.0f %6.1f\n", fahr, celsius);
		
		fahr = fahr + step;
	}
}